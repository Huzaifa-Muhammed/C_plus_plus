#include<iostream>

using namespace std;

class Node {
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = NULL;
	}
public:
	friend class LinkListQueue;
};

class LinkListQueue {
public:
	Node* front;
	Node* rear;
	int size = 0;


	LinkListQueue() {
		front = rear = NULL;
	}

	bool isEmpty() {
		return front == NULL;
	}

	void enque(int val) {
		Node* mynode = new Node(val);

		if (front == NULL) {
			front = rear = mynode;
		}
		else {
			rear->next = mynode;
			rear = mynode;
		}

		size++;
	}


	void display() {

		if (front == NULL) {
			cout << "\nList is empty" << endl;
		}
		else {
			Node* temp = front;

			cout << endl;
			while (temp != NULL) {
				cout << temp->data << "\t";
				temp = temp->next;
			}
		}
	}

	void sortAscending() {

		int temp;

		if (front == NULL) {
			cout << "List is empty" << endl;
		}
		else {
			Node* i = NULL;
			Node* j = NULL;

			for (i = front; i->next != NULL; i = i->next) {
				for (j = i->next; j != NULL; j = j->next) {
					if (i->data > j->data)
					{
						temp = i->data;
						i->data = j->data;
						j->data = temp;
					}
				}
			}
		}
	}
};

int main() {

	LinkListQueue list;

	int choice = -1;
	int val = 0;
	do {
		system("CLS");

		cout << "Please Enter the Value to Insert: ";
		cin >> val;

		list.enque(val);

		cout << "\nEnter -1 to Terminate and Any Other Number to Insert More Numbers: ";
		cin >> choice;
	} while (choice != -1);

	list.sortAscending();
	list.display();
}
