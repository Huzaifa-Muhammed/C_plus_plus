#include <iostream>

using namespace std;

class Node {
	int data;
	Node* next;

public:
	Node(int val) {
		data = val;
		next = NULL;
	}

	friend class  SingleLinkList;
};

class SingleLinkList {
	int size ;
public:
	Node* head;
	SingleLinkList() {
		head = NULL;
		size = 0;
	}

	bool insert(int val,Node* pos) {
		
		if (pos == NULL) {
			Node* mynode = new Node(val);
			size++;
			head = mynode;
			return true;
		}
		else if (val <= pos->data) {
			Node* mynode = new Node(val);
			size++;
			mynode->next = pos;
			head = mynode;
			return true;
		}
		else if (pos->next == NULL) {
			Node* mynode = new Node(val);
			size++;
			pos->next = mynode;
			return true;
		}
		else if (val <= pos->next->data) {
			Node* mynode = new Node(val);
			size++;
			mynode->next = pos->next;
			pos->next = mynode;
			return true;
		}
		else
			return insert(val, pos->next);
	}

	bool median() {

		if (size == 0) {
			cout << "\nList is Empty!";
			return false;
		}			
		else if (size % 2 == 1) {
			Node* temp = head;
			int position = size / 2 + 1;
			for (int i = 1; i < position; i++)
				temp = temp->next;

			cout << "\nThe Median is: " << temp->data;
			return true;
		}
		else {
			Node* temp = head;
			int position = size / 2 ;
			for (int i = 1; i < position; i++)
				temp = temp->next;

			double med= (temp->data + temp->next->data);
			med = med / 2;

			cout << "\nThe Median is: " << med;
			return true;			
		}
	}

	void display() {

		int count = 1;

		if (head == NULL) {
			cout << "List is empty" << endl;
		}
		else {
			Node* temp = head;
			while (temp != NULL) {
				cout << "\nThe Value at Position Number " << count << " is " << temp->data << "\t";
				temp = temp->next;
				count++;
			}
		}
	}

};

int main(){
	SingleLinkList list;

	int choice = -1;
	int val = 0;
	do {
		system("CLS");

		cout << "Please Enter the Value to Insert: ";
		cin >> val;

		list.insert(val,list.head);
		
		cout << "\nEnter -1 to Terminate and Any Other Number to Insert More Numbers: ";
		cin >> choice;
	} while (choice != -1);

	list.median();

	list.display();

	return 0;
}