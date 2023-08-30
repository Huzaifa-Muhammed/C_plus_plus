class Book {
private:
	string title;
	float accession_no;
	string category;
	float price;
	string author;
public:
	void settitle(string tit);
	string gettitle();
	void setcat(string cat);
	string getcat();
	void setaut(string aut);
	string getaut();
	void setaccession_no(float ac_no);
	float getaccession_no();
	void setprice(float pri);
	float getprice();
	Book();
	Book(string titl, float accession, string categ, float pri, string auth);
	void addinfo(Book b[], int siz);
	Book getbook(Book b[], int siz);
	Book getbookbyAuthour(Book b[], int siz);
	Book getbookbyTitle(Book b[], int siz);
	Book expensivebook(Book b[], int siz);
	void diplaybook(Book book[], int siz);

};
