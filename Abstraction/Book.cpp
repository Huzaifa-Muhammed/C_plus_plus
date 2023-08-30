#include"Book.h"
#include<iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

void Book::settitle(string tit) {
	Book::title = tit;
}
string Book::gettitle() {
	return Book::title;
}
void Book::setcat(string cat) {
	Book::category = cat;
}
string Book::getcat() {
	return Book::category;
}
void Book::setaut(string aut) {
	Book::author = aut;
}
string Book::getaut() {
	return Book::author;
}
void Book::setaccession_no(float ac_no) {
	Book::accession_no = ac_no;
}
float Book::getaccession_no() {
	return Book::accession_no;
}
void Book::setprice(float pri) {
	Book::price = pri;
}
float Book::getprice() {
	return Book::price;
}
Book:: Book()
{
	Book::title = "Dummy";
	Book::accession_no = 0.0;
	Book::category = "Dummy";
	Book::price = 0.0;
	Book::author = "NULL";
}
Book::Book(string titl, float accession, string categ, float pri, string auth)
{
	Book::title = titl; Book::accession_no = accession; Book::category = categ; Book::price = pri; Book::author = auth;
}
void Book::addinfo(Book b[], int siz) {
	string tit;
	float ac_no;
	string cat;
	float pr;
	string aut;
	for (int i = 0; i < siz; i++)
	{
		cout << "Enter Title of Book " << i + 1 << " :";
		cin >> tit;
		b[i].Book::settitle(tit);
		cout << "Enter the name of author of book " << b[i].gettitle() << " :";
		cin >> aut;
		b[i].Book::setaut(aut);
		cout << "Enter the Category of book :";
		cin >> cat;
		b[i].Book::setcat(cat);
		cout << "Enter the price of book :";
		cin >> pr;
		b[i].Book::setprice(pr);
		cout << "Enter Accession No of book :";
		cin >> ac_no;
		b[i].Book::setaccession_no(ac_no);
	}
}
Book Book::getbook(Book b[], int siz)
{
	float ac_no = 0; short int loc = 0;
	cout << "Enter Accssesion number of book you required :";
	cin >> ac_no;
	for (int i = 0; i < siz; i++)
	{
		if (b[i].Book::getaccession_no() == ac_no)
		{
			loc = i;
		}
	}
	return b[loc];
}
Book Book::getbookbyAuthour(Book b[], int siz)
{
	string aut = 0; short int loc = 0;
	cout << "Enter Name of author of book you required :";
	cin >> aut;
	for (int i = 0; i < siz; i++)
	{
		if (b[i].Book::getaut() == aut)
		{
			loc = i;
		}
	}
	return b[loc];
}
Book Book::getbookbyTitle(Book b[], int siz)
{
	string ac_no = 0; short int loc = 0;
	cout << "Enter Tile of book you required :";
	cin >> ac_no;
	for (int i = 0; i < siz; i++)
	{
		if (b[i].Book::gettitle() == ac_no)
		{
			loc = i;
		}
	}
	return b[loc];
}
Book Book::expensivebook(Book b[], int siz)
{
	float ac_no = 0; short int loc = 0;

	for (int i = 0; i < siz; i++)
	{
		if (b[i].Book::getprice() > ac_no)
		{
			loc = i;
		}
	}
	return b[loc];
}
void Book::diplaybook(Book book[], int siz) {
	for (int i = 0; i < siz; i++)
	{
		cout << "Title of Book " << i + 1 << " is :" << book[i].Book::gettitle() << endl << "Author of book " << book[i].Book::gettitle() << " is :" << book[i].Book::getaut() << endl;
		cout << "Accssesion number of book is :" << book[i].Book::getaccession_no() << endl;
		cout << "Category of  book is :" << book[i].getcat() << endl;
		cout << "Price of book is :" << book[i].getprice() << endl;
	}
}
