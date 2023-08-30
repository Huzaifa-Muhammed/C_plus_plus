#include<iostream>
#include<stack>
#include<queue>
using namespace std;


////  Methode 1


////  By #iclude<stack>   and Stack<data type>Name
////  this works for 6 functions  1-Name.push()  2-Name.POP()  3-Name.Top()  4-Name.size()  5-Name.empty()  6-Name.swap(){to swap a stack into other}
//
//void Display(stack<int>& Stack) {
//	while (Stack.empty() == false) {
//		cout << "Top :" << Stack.top()<<endl;
//		Stack.pop();
//	}
//}
//
//int main()
//{
//	stack<int>Mystack;
//	stack<int>Mystack1;
//	Mystack.push(1);
//	Mystack.push(2);
//	Mystack.push(3);
//	Mystack.push(4);
//	Mystack.push(5);
//	cout << "Size of stack is :" << Mystack.size()<<endl;
//	Display(Mystack);
//	Mystack.swap(Mystack1);
//	Display(Mystack);
//}


////  Methode 2



//#define n 50
//short counter = 0;
//
//class Stack {
//	int* arr;
//	short top;
//public:
//	int space = 0;
//	Stack() {
//		arr = new int[n];
//		top = -1;
//	}
//	void PUSH(int val) {
//		if (top==n-1) {
//			cout << "Not enough space.." << endl;
//		}
//		else {
//			top++;
//			arr[top] = val;
//			counter++;
//			space = top;
//		}
//	}
//	void POP() {
//		if (top==-1) {
//			cout << "Stack is Empty ..." << endl;
//			return ;
//		}
//		else {
//			cout<<arr[top]<<endl;
//			top--;
//			counter--;
//		}
//	}
//	void DispRev(Stack s) {
//		for (int i = 0; i < space+1; i++) {
//			cout << arr[i] << "  ";
//		}
//	}
//	void Disp(Stack s) {
//		while (top!=-1) {
//			cout << s.arr[top]<<"  ";
//			top--;
//		}
//	}
//};
//int main() 
//{
//	Stack s;
//	s.PUSH(1);
//	s.PUSH(2);
//	s.PUSH(3);
//	s.PUSH(4);
//	s.Disp(s);
//	cout << endl;
//	s.DispRev(s);
//	
//
//}


//Stack using Queue

//methode 1

//class Node {
//public:
//	int data;
//	Node* next;
//	Node(int val) {
//		this->data = val;
//		this->next = NULL;
//	}
//};
//class Queue {
//public:
//	Node* First;
//	Node* Last;
//	Queue() {
//		this->First = NULL;
//		this->Last = NULL;
//	}
//	bool isEmpty() {
//		return this->First == NULL ? true : false;
//	}
//	void enQueue(int val) {
//		Node* mynode = new Node(val);
//		if (this->First == NULL) {
//			this->First = mynode;
//			this->Last = mynode;
//		}
//		else {
//			this->Last->next = mynode;
//			this->Last = mynode;
//		}
//	}
//	int Top() {
//		if (this->First == NULL) {
//			cout << "Queue is Empty !!!" << endl;
//		}
//		else {
//			Node* temp=this->First;
//			int trash = temp->data;
//			temp = temp->next;
//			return trash;
//		}
//	}
//	void deQueue() {
//		if (isEmpty()) {
//			cout << "Queue is Empty !!!" << endl;
//		}
//		else {
//			Node* del = this->First;
//			First = First->next;
//			delete del;
//		}
//	}
//};
//class Stack {
//	Queue* First;
//	Queue* Q1;
//	Queue* Q2;
//	Queue* Q3;
//	int size;
//	int Maxsize;
//public:
//	Stack(int MAXSize) {
//		this->Maxsize = MAXSize;
//		this->size = 0;
//		this->First =new Queue();
//		this->Q1 = new Queue();
//		this->Q2 = new Queue();
//		this->Q3 = new Queue();
//	}
//	bool isEmpty() {
//		return this->Q1 == NULL ? true : false;
//	}
//	bool isFull() {
//		return this->size > this->Maxsize ? true : false;
//	}
//	void Push(int val) {
//		if (isFull()){
//			cout << "Stack is Full !!!" << endl;
//		}
//		else {
//			this->First = new Queue();
//			this->First->enQueue(val);
//		}
//	}
//	void Pop() {
//		while (this->First->Top()!=NULL) {
//			Q1->enQueue(this->First->Top());
//			this->First->deQueue();
//		}
//		if (isEmpty()) {
//			cout << "Stack is Empty !!!" << endl;
//		}
//		else {
//			this->Q1->deQueue();
//		}
//	}
//	int Top() {
//		return this->Q1->Top();
//	}
//	void Display() {
//		while (this->Q1->Top() != NULL) {
//			Q2->enQueue(this->Q1->Top());
//			this->Q1->deQueue();
//		}
//		while (this->Q2->Top() != NULL) {
//			Q3->enQueue(this->Q2->Top());
//			this->Q2->deQueue();
//		}
//		if (this->Q3 == NULL) {
//			cout << "Stack is Empty !!!" << endl;
//		}
//		else {
//			while (this->Q3 != NULL) {
//				cout << this->Q3->Top() << "  ";
//			}
//		}
//	}
//};
//int main() 
//{
//	Stack S(3);
//	S.Push(1);
//	S.Push(2);
//	S.Push(3);
//	S.Display();
//	S.Pop();
//	S.Display();
//}

//methode 2

//by library of queue

//int main()
//{
//	queue<int>Q;
//	for (int i = 1; i == 3; i++) {
//		Q.push(i);
//	}
//	for (int i = 1; i == 3; i++) {
//		cout << Q.front();
//	}
//}