#include<iostream>
#include<fstream>
using namespace std;


//methode 1

////class node {
////public:
////	int data;
////	node* next;
////	node(int val) {
////		this->data = val;
////		this->next = NULL;
////	}
////
////};
////class linklist {
////public:
////	node* head;
////	linklist() {
////		head = NULL;
////	}
////	void inserthead(int val) {
////		node* mynode = new node(val);
////		if (head == NULL)
////		{
////			head = mynode;
////		}
////		else {
////			mynode->next = head;
////			head = mynode;
////		}
////	}
////	void insertatlast() {
////
////	}
////	void display() {
////		if (head == NULL) {
////			cout << "list is empty." << endl;
////		}
////		else {
////			node* temp = head;
////			while (temp!= NULL) {
////				cout << temp->data << "\t";
////				temp = temp->next;
////			}
////		}
////	}
////};
////int main() 
////{
////	linklist l;
////	l.inserthead(20);
////	l.inserthead(30);
////	l.inserthead(40);
////	l.inserthead(50);
////	l.display();
////}
//
//class Node {
//public:
//	int data;
//	Node* next;
//	Node(int val) {
//		this->data = val;
//		this->next = NULL;
//	}
//};
//class Linkedlist {
//public:
//	Node* head;
//	Node* tail;
//	Linkedlist() {
//		head = tail = NULL;
//	}
//	void InsertAtBegin(int val) {
//		Node* mynode = new Node(val);
//		if (head == NULL) {
//			head = mynode;
//			tail = mynode;
//		}
//		else {
//			mynode->next = head;
//			head = mynode;
//		}
//	}
//	void InsertAtEnd(int val) {
//		Node* mynode = new Node(val);
//		if (head == NULL) {
//			head = mynode;
//			tail = mynode;
//		}
//		else {
//			tail->next = mynode;
//			tail = mynode;
//		}
//	}
//	void removehead() {
//		Node* del = head;
//		head = head->next;
//		delete del;
//	}
//	void remove(int val) {
//		Node* temp = head;
//		if (temp==NULL) {
//			return;
//		}
//		else if (temp->next=NULL) {
//			delete head;
//		}
//		else {
//			while (temp->next->data != val)
//			{
//				temp = temp->next;
//			}
//			Node* del = temp->next;
//			temp->next = temp->next->next;
//			delete del;
//		}
//	}
//	void display() {
//		if (head == NULL) {
//			cout << "List is empty..." << endl;
//		}
//		else {
//			Node* temp = head;
//			while (temp !=NULL) {
//				cout << temp->data;
//				temp = temp->next;
//
//			}
//			cout << endl;
//		}
//	}
//};
//int main() 
//{
//	Linkedlist L;
//	/*L.InsertAtBegin(1);
//	L.InsertAtBegin(2);
//	L.InsertAtBegin(3);
//	L.InsertAtBegin(4);
//	L.InsertAtBegin(5);
//	L.display();*/
//	/*L.InsertAtEnd(1);
//	L.InsertAtEnd(2);
//	L.InsertAtEnd(3);
//	L.InsertAtEnd(4);
//	L.InsertAtEnd(5);*/
//	L.display();
//	L.remove(1);
//	L.display();
//	L.remove(2);
//	L.display();
//}


//methode 2
struct Node {
	double data;
	Node* next;
	Node(double val,Node*Next=nullptr) {
		this->data = val;
		this->next = Next;
	}
};
int main()
{
	/*Node* head = new Node(1.3);
	head = new Node(1.5, head);
	while (head!=NULL) {
		cout << head->data << " ";
		head = head->next;
	}*/


	double number=0;
	Node* head = NULL;
	ifstream file("file.txt");
	if (!file) {
		cout << "File could not open " << endl;
	}
	while (file>>number) {
		cout << number << "  ";
		head = new Node(number, head);
	}
}















//#include <iostream>
//
//using namespace std;
//
////class Node
////{
////private:
////    char data;
////    Node* next;
////
////public:
////    Node(char val)
////    {
////        data = val;
////        next = NULL;
////    }
////
////    friend class Stack;
////};
////
////class Stack
////{
////private:
////    Node* Top;
////
////public:
////    Stack()
////    {
////        Top = NULL;
////    }
////
////    void Push(char st)
////    {
////
////        Node* temp = Top;
////        Node* myNode = new Node(st);
////
////        if (IsEmpty())
////        {
////            Top = myNode;
////        }
////        else
////        {
////            myNode->next = temp;
////            temp = myNode;
////            Top = temp;
////        }
////    }
////
////    char Pop()
////    {
////        Node* temp = Top;
////        Node* del;
////        if (!IsEmpty())
////        {
////            del = temp;
////            Top = temp->next;
////            return temp->data;
////            delete del;
////        }
////    }
////
////    bool IsEmpty()
////    {
////        return Top == NULL ? true : false;
////    }
////
////    char Peek()
////    {
////        Node* temp = Top;
////
////        if (!IsEmpty())
////        {
////            return temp->data;
////        }
////    }
////
////    int Precedence(char c)
////    {
////        if (c == '-' || c == '+')
////            return 1;
////        else if (c == '*' || c == '/')
////            return 2;
////        else if (c == '^')
////            return 3;
////        return 0;
////    }
////
////    void EvaluateExpression(string s)
////    {
////
////        char symbol;
////        int output = 0;
////        int Op1, Op2;
////        for (int i = 0; i < s.length(); i++)
////        {
////            symbol = s[i];
////            if (isdigit(symbol))
////            {
////                Push(symbol - '0');
////            }
////            else if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
////            {
////
////                Op1 = Pop();
////                Op2 = Pop();
////
////                switch (symbol)
////                {
////                case '*':
////                    output = Op2 * Op1;
////                    break;
////
////                case '/':
////                    output = Op2 / Op1;
////                    break;
////
////                case '+':
////                    output = Op2 + Op1;
////                    break;
////
////                case '-':
////                    output = Op2 - Op1;
////                    break;
////                }
////                Push(output);
////            }
////        }
////        cout << "\n Result of expression evaluation :" << output;
////    }
////};
////
////int main()
////{
////    Stack S;
////    string input;
////    cout << "Enter an expression in infix form with Brackets: ";
////    cin >> input;
////    S.EvaluateExpression(input);
////    return 0;
////}
//
//class Node {
//public:
//	char data;
//	Node* next;
//	Node(char val) {
//		this->data = val;
//		this->next = NULL;
//	}
//};
//class Stack {
//	Node* Mynode;
//public:
//	Stack() {
//		Mynode = NULL;
//	}
//	bool isEmpty() {
//		return this->Mynode == NULL ? true : false;
//	}
//	void Push(char value) {
//		if (isEmpty()) {
//			cout;
//		}
//	}
//};
//
