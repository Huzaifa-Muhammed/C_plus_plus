#include <iostream>
using namespace std;

// Queue using linkedlist

class Node
{
public:
    int data;
    Node *next;
    Node *previous;
    Node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
    }
};
class Queue
{
public:
    Node *front;
    Node *rear;

    Queue()
    {

       
        front = NULL;
        rear = NULL;
    }
    void function()
    {
        int iterate = 0;
         while (iterate != -1)
        {
             iterate = choice();
            if (iterate == 1)
            {
                enqueue();
            }
            else if (iterate == 2)
            {
                dequeue();
            }
            else if (iterate == 3)
            {
                display();
            }
        }
    }
    int choice()
    {
        int chooice;
        cout <<endl<< "Enter 1 to enqueue";
        cout << endl
             << "Enter 2 to dequeue";
        cout << endl
             << "Enter 3 to display queue";
        cout << endl
             << "Enter -1 to end " << endl;
        cin >> chooice;
        return chooice;
    }

    bool isEmpty()
    {
        return rear == NULL;
    }

    void enqueue()
    {

        int val;
        cout << endl
             << "Enter value to enqueue"<<" ";
        cin >> val;
        Node *newnode = new Node(val);

        if (rear == NULL)
        {

            front = newnode;
            rear = newnode;
        }
        else
        {
            newnode->previous = rear;
            rear->next = newnode;
            rear = newnode;
        }
    }
    int dequeue()
    {
        Node *temp = front;
        if (isEmpty())
        {
            cout << endl
                 << "Queue is Empty";
            return 0;
        }
        else
        {
            int var = temp->data;

            front = front->next;
            delete temp;
            return var;
        }
    }
    void display()
    {
        Node *temp = front;
        if (isEmpty())
        {
            cout << "Queue is empty";
        }
        else
        {

            while (temp != NULL)
            {
                cout << endl
                     << temp->data;
                temp = temp->next;
            }
        }
    }
};
int main()
{
    Queue queue;
    queue.function();
}


//   Queue using array

class Queue {
    int* arr;
    int size;
    int CurrentIndex;
    int Front;
public:
    Queue(int siz) {
        this->size = siz;
        this->arr = new int[size];
        this->CurrentIndex = this->Front = -1;
    }
    bool isEmpty() {
        return CurrentIndex == -1 ? true : false;
    }
    bool isFull() {
        return CurrentIndex == size ? true : false;
    }
    void Enqueue(int val) {
        if (isFull()) {
            cout << "Queue is Full !!!" << endl;
        }
        else {
            this->CurrentIndex++;
            this->arr[CurrentIndex] = val;
        }
    }
    int Dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty !!!" << endl;
        }
        else if (isFull()) {

        }
        else {
            this->Front++;
            int temp = this->arr[this->Front];
            this->arr[this->Front] = NULL;
            this->CurrentIndex--;
            return temp;
        }
    }
    void Display() {
        if (!isEmpty()) {
            for (int i = 0; i < size; i++) {
                if (this->arr[i] != NULL) {
                    cout << this->arr[i] << "  ";
                }
            }
        }
        else if (isEmpty()) {
            cout << "Queue is Empty !!!" << endl;
        }
    }
};
int main()
{
    Queue q(3);
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    cout << q.Dequeue() << endl;
    cout << q.Dequeue() << endl;
    q.Display();
}