#include<iostream>
#include<stack>
using namespace std;

//   Queue using array

//class Queue {
//	int* arr;
//	int size;
//	int CurrentIndex;
//	int Front;
//public:
//	Queue(int siz) {
//		this->size = siz;
//		this->arr = new int[size];
//		this->CurrentIndex =this->Front= -1;
//	}
//	bool isEmpty() {
//		return CurrentIndex== -1 ? true : false;
//	}
//	bool isFull() {
//		return CurrentIndex== size ? true : false;
//	}
//	void Enqueue(int val) {
//		if (isFull()) {
//			cout << "Queue is Full !!!" << endl;
//		}
//		else {
//			this->CurrentIndex++;
//			this->arr[CurrentIndex] = val;
//		}
//	}
//	int Dequeue() {
//		if (isEmpty()) {
//			cout << "Queue is Empty !!!" << endl;
//		}
//		else if (isFull()) {
//
//		}
//		else {
//			this->Front++;
//			int temp=this->arr[this->Front];
//			this->arr[this->Front] = NULL;
//			this->CurrentIndex--;
//			return temp;
//		}
//	}
//	void Display() {
//		if (!isEmpty()) {
//			for (int i = 0; i < size; i++) {
//				if (this->arr[i] != NULL) {
//					cout << this->arr[i]<<"  ";
//				}
//			}
//		}
//		else if (isEmpty()) {
//			cout << "Queue is Empty !!!" << endl;
//		}
//	}
//};
//int main()
//{
//	Queue q(3);
//	q.Enqueue(1);
//	q.Enqueue(2);
//	q.Enqueue(3);
//	cout << q.Dequeue() <<endl;
//	cout << q.Dequeue() << endl;
//	q.Display();
//}

//   Queue using Linkedlist

//class Node {
//public:
//	int data;
//	Node* next;
//	Node(int data) {
//		this->data = data;
//		this->next = NULL;
//	}
//};
//class Queue {
//	Node* Front;
//	Node* Rear;
//	int size;
//public:
//	Queue() {
//		this->Front = this->Rear = NULL;
//		this->size = 0;
//	}
//	bool isEmpty() {
//		return this->Front == NULL|| this->Rear == NULL ? true : false;
//	}
//	void Enqueue(int val) {
//		Node* mynode = new Node(val);
//		if (isEmpty()) {
//			this->Front = mynode;
//			this->Rear = mynode;
//			this->size++;
//		}
//		else {
//			this->Rear->next = mynode;
//			this->Rear = mynode;
//			this->size++;
//		}
//	}
//	int Dequeue() {
//		if (isEmpty()) {
//			cout << "Queue is Empty !!!" << endl;
//		}
//		else {
//			Node* trash;
//			trash = Front;
//			Front = Front->next;
//			int temp = trash->data;
//			delete trash;
//			this->size--;
//			return temp;
//		}
//	}
//	int SizeOfQueue() {
//		return this->size;
//	}
//	void Display() {
//		if (!isEmpty()) {
//			Node* Newnnode;
//			Newnnode = this->Front;
//			while (Newnnode!=NULL) {
//				cout << Newnnode->data << "  ";
//				Newnnode = Newnnode->next;
//			}
//		}
//		else {
//			cout << "Queue is Empty !!!" << endl;
//		}
//	}
//};
//int main()
//{
//	Queue q;
//	q.Enqueue(1);
//	q.Enqueue(2);
//	q.Enqueue(3);
//	cout << q.SizeOfQueue() << endl;
//	q.Display();
//	cout <<endl;
//	q.Dequeue();
//	q.Display();
//}


//Queue using stack

//methode 1

//struct Queue {
//    stack<int> s1, s2;
//
//    void enQueue(int x)
//    {
//        // Move all elements from s1 to s2
//        while (!s1.empty()) {
//            s2.push(s1.top());
//            s1.pop();
//        }
//
//        // Push item into s1
//        s1.push(x);
//
//        // Push everything back to s1
//        while (!s2.empty()) {
//            s1.push(s2.top());
//            s2.pop();
//        }
//    }
//
//    // Dequeue an item from the queue
//    int deQueue()
//    {
//        // if first stack is empty
//        if (s1.empty()) {
//            cout << "Q is Empty";
//            exit(0);
//        }
//
//        // Return top of s1
//        int x = s1.top();
//        s1.pop();
//        return x;
//    }
//};
//
//// Driver code
//int main()
//{
//    Queue q;
//    q.enQueue(1);
//    q.enQueue(2);
//    q.enQueue(3);
//
//    cout << q.deQueue() << '\n';
//    cout << q.deQueue() << '\n';
//    cout << q.deQueue() << '\n';
//
//    return 0;
//}

//methode 2

//class Queue {
//	stack<int>S1;
//	stack<int>S2;
//	stack<int>S3;
//	stack<int>S4;
//	int Msize;
//	int size;
//public:
//	Queue(int Maxsize) {
//		this->Msize = Maxsize;
//		this->size = 0;
//	}
//	bool isEmpty() {
//		return this->S2.empty() ? true : false;
//	}
//	bool isFull() {
//		return this->size > this->Msize ? true : false;
//	}
//	void Enqueue(int val) {
//		if (isFull()) {
//			cout << "Queue is Full !!!" << endl;
//		}
//		else {
//			this->S1.push(val);
//			this->size++;
//		}
//	}
//	int Dequeue() {
//		while (!this->S1.empty()) {
//			this->S2.push(this->S1.top());
//			this->S1.pop();
//		}
//		if (isEmpty()) {
//			cout << "Queue is Empty !!!" << endl;
//		}
//		else {
//			int temp= this->S2.top();
//			this->S2.pop();
//			this->size--;
//			return temp;
//		}
//	}
//	void Display() {
//		while (!this->S2.empty()) {
//			this->S3.push(this->S2.top());
//			this->S2.pop();
//		}
//		while (!this->S3.empty()) {
//			this->S4.push(this->S3.top());
//			this->S3.pop();
//		}
//		if(!this->S4.empty()) {
//			while (!this->S4.empty()) {
//				cout << this->S4.top() << "  ";
//				this->S4.pop();
//			}
//		}
//		else {
//			cout << "Queue is Empty !!!" << endl;
//		}
//	}
//};
//int main()
//{
//	Queue Q(3);
//	Q.Enqueue(1);
//	Q.Enqueue(2);
//	Q.Enqueue(3);
//	cout<<Q.Dequeue()<<endl;
//	Q.Display();
//}


// circular Queue

class Queue {
	int* arr;
	int front;
	int rear;
	int Msize;
public:
	Queue(int MaxSize) {
		this->Msize = MaxSize;
		this->arr = new int[this->Msize];
		this->front = this->rear = -1;
	}
	bool isEmpty() {
		return this->front ==-1&&this->rear== -1 ? true : false;
	}
	bool isFull() {
		return ((rear + 1) % this->Msize == this->front) ? true : false;
	}
	void Enqueue(int val) {
		if (isEmpty()) {
			front = ((front + 1) % this->Msize);
			rear = ((rear + 1) % this->Msize);
			arr[rear] = val;
		}
		else if (isFull()) {
			cout << "Queue is Full !!!" << endl;
		}
		else {
			rear = (rear + 1) % this->Msize;
			arr[rear] = val;
		}
	}
	int Dequeue() {
		if (isEmpty()) {
			cout << "Queue is Empty !!!" << endl;
		}
		else if(isFull()) {
			this->front = this->rear = -1;
		}
		else {
			int temp =this->arr[this->front];
			this->front = (this->front + 1) % this->Msize;
			return temp;
		}
	}
	int Top() {
		return this->arr[this->front];
	}
	void Display() {
		int i = 0;
		while (i!=rear) {
			cout << this->arr[i];
			i = (i + 1) % Msize;
		}
		this->arr[this->rear];
	}
};
int main()
{
	Queue Q(5);
	for (int i = 1; i < 6; i++){
		Q.Enqueue(i);
	}
	Q.Display();
}