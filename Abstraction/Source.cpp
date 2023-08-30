#include"Book.h"
#include<iostream>
#include<math.h>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int siz = 0;

int main()
{
	short int size = 0;
	cout << "Enter the number of books whose data you want to store :";
	cin >> size;
	Book* b = new Book[size];
	Book b1,b2;
	b1.addinfo(b, size);
	b1.diplaybook(b, size);
	b2=b1.getbook(b, size);
    return 0;
}
