#include<iostream>
using namespace std;

//  recursion in LinkedlIst

/*class Node {
public:
	int data;
	Node* next;
	Node(int val) {
		this->data = val;
		this->next = NULL;
	}
};
class List {
	Node* head;
	Node* Org;
public:
	List() {
		head = NULL;
		Org = NULL;
	}
	void Insert(int val) {
		Node* mynode = new Node(val);
		if (head == NULL) {
			head = mynode;
			Org = head;
		}
		else if (val > head->data) {
			mynode->next = head;
			head = mynode;
		}
		else if (val<head->data) {
			head->next = mynode;
			head = mynode;
		}
		else if (val == head->data) {
			head->data = mynode->data;
		}

	}
	void Display() {
		Node* trash = Org;
		if (trash == NULL) {
			cout << "List is Empty !!!" << endl;
		}
		else {
			while (trash != NULL) {
				cout << trash->data << "\t";
				trash = trash->next;
			}
		}
	}
};


int main()
{
	List L;
	L.Insert(1);
	L.Insert(3);
	L.Insert(2);
	L.Insert(6);
	L.Insert(1);
	L.Insert(9);
	L.Display();
}*/

//   Bubble sort In LinkedList

//struct Node
//{
//	int data;
//	Node* next;
//	Node(int val) {
//		this->data = val;
//		this->next = NULL;
//	}
//};
//class LinkedList
//{
//	Node* head;
//	Node* last;
//	int size;
//public:
//	LinkedList() {
//		this->head = NULL;
//		this->last = NULL;
//		this->size = -1;
//	}
//	void InsertAtBegin(int val) {
//		Node* mynode = new Node(val);
//		if (head == NULL) {
//			head = mynode;
//			size++;
//		}
//		else {
//			mynode->next = head;
//			head = mynode;
//			size++;
//		}
//	}
//	void Swap(int a, int b) {
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//    void Sorting() {
//		for (int i = 0; i < size; i++) {
//			Node* temp = head;
//			while (temp->next != NULL) {
//				if (temp->data > temp->next->data) {
//					swap(temp->data, temp->next->data);
//					temp = temp->next;
//				}
//				else {
//					temp = temp->next;
//				}
//			}
//		}
//	}
//	void Display() {
//		Node* temp = head;
//		while (temp != NULL) {
//			cout << temp->data << "\t";
//			temp = temp->next;
//		}
//	}
//};
//int main()
//{
//	LinkedList L;
//	L.InsertAtBegin(1);
//	L.InsertAtBegin(4);
//	L.InsertAtBegin(9);
//	L.InsertAtBegin(11);
//	L.InsertAtBegin(5);
//	L.Sorting();
//	L.Display();
//}

