#include<iostream>
#include<string>
using namespace std;

class BankAcocunt 
{
protected:
	string Name;
	int account_no;
	float balance;
public:
	BankAcocunt(string tempname="None", int tempAccount=0, float tempbal=0) {
		this->Name = tempname;
		this->account_no = tempAccount;
		this->balance = tempbal;
	}
	virtual string retrivename() = 0{};
	virtual int retriveAccountNo() = 0;
	virtual float retriveBalance() = 0;
	virtual float deposit(float tempamount) = 0;
	virtual float withdraw(float tempamount) = 0;
	virtual void MonthlyStatement() = 0;
};
class ChekingAccount :public BankAcocunt {
protected:
	float amount{};
public:

	virtual void WriteCheck() = 0;
};
class NoserviceChargeChecking: public ChekingAccount {
	const float intrest = 1.3;
	int months;
public:
	float minimumBalance = 100;
	void setname(string tempname) {
		this->Name = tempname;
	}
	string retrivename() {
		return this->Name;
	}
	void setAccount_No(int tempaccount) {
		this->account_no = tempaccount;
	}
	int retriveAccountNo() {
		return this->account_no;
	}
	void setbalance(float tempbal) {
		this->balance = tempbal;
	}
	float retriveBalance() {
		return this->intrest * balance;
	}
	float deposit(float tempamount) {
		cout << "Enter the No of Months till you want to store money in Bank :";
		cin >> this->months;
		return this->months*(this->balance = this->balance + tempamount);
	}
	float withdraw(float tempamount) {
		return this->balance = this->balance - tempamount;
	}
	void WriteCheck() {
		cout << "Enter the amount you want to withdraw by check :";
		cin >> this->amount;
		this->balance = this->balance - this->amount;
	}
	void MonthlyStatement() {
		cout << "Total Balance is :" << this->balance << endl;
	}
	void display() {
		cout << "Nam is :" << this->Name << "\tAccount no is :" << this->account_no << "\tBalance is :" << this->balance << endl;
	}
};
class ServiceChargeChecking :public ChekingAccount {
public:
	void setname(string tempname) {
		this->Name = tempname;
	}
	string retrivename() {
		return this->Name;
	}
	void setAccount_No(int tempaccount) {
		this->account_no = tempaccount;
	}
	int retriveAccountNo() {
		return this->account_no;
	}
	void setbalance(float tempbal) {
		this->balance = tempbal;
	}
	float retriveBalance() {
		return this->balance;
	}
	float deposit(float tempamount) {
		return this->balance = this->balance + tempamount;
	}
	float withdraw(float tempamount) {
		return this->balance = this->balance - tempamount;
	}
	void WriteCheck() {
		cout << "Enter the amount you want to withdraw by check :";
		cin >> this->amount;
		this->balance = this->balance - this->amount;
	}
	void MonthlyStatement() {
		cout << "Total Balance is :" << this->balance << endl;
	}
	void display() {
		cout << "Nam is :" << this->Name << "\tAccount no is :" << this->account_no << "\tBalance is :" << this->balance << endl;
	}
};
class HighIntrestChecking :public NoserviceChargeChecking {
	const float intrest = 1.7;
	int months;
public:
	float minimumBalance = 200;
	void setname(string tempname) {
		this->Name = tempname;
	}
	string retrivename() {
		return this->Name;
	}
	void setAccount_No(int tempaccount) {
		this->account_no = tempaccount;
	}
	int retriveAccountNo() {
		return this->account_no;
	}
	void setbalance(float tempbal) {
		if (tempbal < minimumBalance) {
			cout << "Enter amount greater than " << minimumBalance << endl;
		}
		else
		this->balance = intrest * tempbal;
	}
	float deposit(float tempamount) {
		cout << "Enter the No of Months till you want to store money in Bank :";
		cin >> this->months;
		return this->months * (this->balance = this->balance + tempamount);
	}
	float withdraw(float tempamount) {
		return this->balance = this->balance - tempamount;
	}
	void WriteCheck() {
		cout << "Enter the amount you want to withdraw by check :";
		cin >> this->amount;
		this->balance = this->balance - this->amount;
	}
	void MonthlyStatement() {
		cout << "Total Balance is :" << this->balance << endl;
	}
	void display() {
		cout << "Nam is :" << this->Name << "\tAccount no is :" << this->account_no << "\tBalance is :" << this->balance << endl;
	}
};
class SavingAccount :public BankAcocunt {
	const float intrest = 1.3;
public:
	void setname(string tempname) {
		this->Name = tempname;
	}
	string retrivename() {
		return this->Name;
	}
	void setAccount_No(int tempaccount) {
		this->account_no = tempaccount;
	}
	int retriveAccountNo() {
		return this->account_no;
	}
	void setbalance(float tempbal) {
		this->balance = this->intrest*(tempbal);
	}
	virtual float retriveBalance() {
		return this->balance;
	}
	float deposit(float tempamount) {
		return this->balance = this->balance + tempamount;
	}
	float withdraw(float tempamount) {
		return this->balance = this->balance - tempamount;
	}
	void MonthlyStatement() {
		cout << "Total Balance is :" << this->balance << endl;
	}
	void display() {
		cout << "Nam is :" << this->Name << "\tAccount no is :" << this->account_no << "\tBalance is :" << this->balance << endl;
	}
};
class HighIntrestsaving :public SavingAccount {
	const float intrest = 1.7;
public:
	void setname(string tempname) {
		this->Name = tempname;
	}
	string retrivename() {
		return this->Name;
	}
	void setAccount_No(int tempaccount) {
		this->account_no = tempaccount;
	}
	int retriveAccountNo() {
		return this->account_no;
	}
	void setbalance(float tempbal) {
		this->balance = this->intrest*tempbal;
	}
	float deposit(float tempamount) {
		return this->balance = this->balance + tempamount;
	}
	float withdraw(float tempamount) {
		return this->balance = this->balance - tempamount;
	}
	void MonthlyStatement() {
		cout << "Total Balance is :" << this->balance << endl;
	}
	void display() {
		cout << "Nam is :" << this->Name << "\tAccount no is :" << this->account_no << "\tBalance is :" << this->retriveBalance() << endl;
	}
};
class CertificateOfDeposit :public BankAcocunt {
	int NoOfMonths;
	float IntrestRate=1.3;
	int currentMonth;
public:
	void Months(int tempMomnth) {
		this->NoOfMonths = tempMomnth;
	}
	int getMonth() {
		return this->NoOfMonths;
	}
	void setname(string tempname) {
		this->Name = tempname;
	}
	string retrivename() {
		return this->Name;
	}
	void setAccount_No(int tempaccount) {
		this->account_no = tempaccount;
	}
	int retriveAccountNo() {
		return this->account_no;
	}
	void setbalance(float tempbal) {
		this->balance = this->IntrestRate*tempbal;
	}
	float retriveBalance() {
		return this->NoOfMonths*this->balance;
	}
	float deposit(float tempamount) {
		return this->balance = this->balance + tempamount;
	}
	float withdraw(float tempamount) {
		cout << "Enter current Month :";
		cin >> currentMonth;
		if (currentMonth < NoOfMonths) {
			cout << "You cannot withdraw money right now." << endl;
			cout << "Remainig Months are :" << NoOfMonths - currentMonth << endl;
		}
		else
		return this->balance = this->balance - tempamount;
	}
	void MonthlyStatement() {
		cout << "Total Balance is :" << this->balance << endl;
	}
	void display() {
		cout << "Nam is :" << this->Name << "\tAccount no is :" << this->account_no << "\tBalance is :" << this->balance << endl;
	}
};
int main() 
{

	HighIntrestChecking hc;
	ServiceChargeChecking sc;
	NoserviceChargeChecking nsc;
	CertificateOfDeposit cod;
	HighIntrestsaving h;;
	SavingAccount s;

}