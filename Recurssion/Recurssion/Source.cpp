#include<iostream>
using namespace std;

//void Func(int i) {
//	if (i <= 2) {
//		Func(i + 1);
//	}
//	cout << i << "  ";
//}
//
//
//int main() 
//{
//	Func(0);
//}

//   Fctorial
int Fact(int i) {
	while (i>0) {
		return i * Fact(i - 1);
	}
	
}
int main()
{
	cout<<Fact(6);
}