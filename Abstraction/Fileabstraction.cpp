#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
using std::cout;
using std::string;
using std::cin;
using std::getline;
using std::endl;
using std::setw;
using std::setfill;
int siz = 0;
class Book {
private:
	string title;
	string category;
	string author;
	float price;
	float accession_no;
public:
    Book(string temptitle="Null",float tempaccse=0.000,string tempcat="Dummy",float tempprice=0.0,string tempauthor="Null"){
       title=temptitle;
	   accession_no=tempaccse;
	   category=tempcat;
	   price=tempprice;
	   author=tempauthor;

    }
    void settitle(string tempti){
       title=tempti;
	}
	string gettitle()const{
		return title;
	}
	void setaccess(float tempacc){
        this->accession_no=tempacc;
	}
    float getaccse()const{
		return this->accession_no;
	}
	void setcategory(string tempcat){
		this->category=tempcat;
	}
	string getcategory()const{
        return this->category;
	} 
	void setprice(float tempprice){
		this->price=tempprice;
	}
	float getprice()const{
        return this->price;
	}
	void setauthor(string tempauthor){
		this->author=tempauthor;
	}
	string getsuthor()const{
		return this->author;
	}
	static void input(Book a[]){
		for(int i=0;i<siz;i++)
		{
			cin.ignore();
			cout<<"Enter the Title of book :";
			getline(cin,a[i].title);
			cin.ignore();
			cout<<"Enter Name of Author :";
			getline(cin,a[i].author);
			
		}
	}
	void display(Book a[])const{
		for(int i=0;i<siz;i++)
		{
		cout<<"Title of book is :"<<a[i].title<<" Author name is :"<<a[i].author<<" Category of book is :"<<a[i].category<<" price of book is :"<<a[i].price<<endl;
		}
	}
	static void expensive(Book a[]){
		short loc=0;float expena=0;
		for(int i=0;i<siz;i++)
		{
			if(a[i].price>expena)
			{
				loc=i;
				expena=a[i].price;
			}
		}
        cout<<a[loc].accession_no<<setw(4)<<a[loc].author<<setw(6)<<a[loc].category<<endl;
	}


     
};
int main()
{
	cout<<"Enter the number you books you have :";
	cin>>siz;
	Book* b1=new Book[siz];
	Book b2;
	b2.input(b1);
	b2.display(b1);
    Book::expensive(b1);
	
}
