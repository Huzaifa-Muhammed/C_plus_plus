#include<iostream>
using namespace std;

class Node {
    char data1;
    float data;
    Node* next;

public:
    Node(float val,char alpha)
    {
        data1 = alpha;
        data = val;
        next = NULL;
    }

    friend class LinkedListStack;
};

class LinkedListStack {

    Node* top;
    float size;

public:
    LinkedListStack() {
        top = NULL;
        size = 0;
    }

    void Push(float val,char alpha) {

        Node* temp = top;
        Node* myNode = new Node(val,alpha);

        if (IsEmpty()) {
            top = myNode;

            cout << "\nPush is Complete\n";
            size++;
        }
        else {
            myNode->next = temp;
            temp = myNode;
            top = temp;

            cout << "\nPush is Complete\n";
            size++;
        }
    }

    void Pop() {
        Node* temp = top;
        Node* del;

        if (IsEmpty()) {
            cout << "\nStack is Empty\n";
        }
        else {
            float x = temp->data;
            char alpha = temp->data1;
            del = temp;
            top = temp->next;
            delete del;

            cout << "\nPop is Complete\n";
            size--;

            cout << "\n The Popped Data is : " << x << " and " << alpha;
        }
    }

    bool IsEmpty() {
        return top == NULL ? true : false;
    }


    void Display() {

        cout << endl;

        Node* temp = top;

        if (IsEmpty()) {
            cout << "Stack is Empty";
        }
        else {
            cout << "\nThe data is : \n";
            while (temp != NULL) {
                cout << temp->data << "\t"<<temp->data1<<endl;
                temp = temp->next;
            }
        }
    }

    void Peek() {
        Node* temp = top;

        if (IsEmpty()) {
            cout << "\nStack is Empty\n";
        }

        else {
            cout << "\n The Data at Top is : " << temp->data << " and " << temp->data1;
        }

    }

    void SizeOfStack() {
        cout << "\n The Size of the Stack is " << size;
    }
};

int main() {

    LinkedListStack stack1;

    int choice = -1;
    do
    {
        cout << "\n\n1.Push\n2.Pop\n3.Peek\n4.Size of Stack\n5.Display\n0.Exit\n";
        cout << "Enter Your Choice:";
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            float val;
            cout << "\nPlease Enter the Float Value : ";
            cin >> val;

            char alpha;
            cout << "\nPlease Enter the Charachter Value : ";
            cin >> alpha;
        
            stack1.Push(val,alpha);
        }
        else if (choice == 2)
        {
            stack1.Pop();
        }
        else if (choice == 3)
        {
           stack1.Peek();
        }
        else if (choice== 4)
        {
            stack1.SizeOfStack();
        }
        else if (choice == 5)
        {
            stack1.Display();
        }

    } while (choice != 0);

    return 0;
}