// This code is by HARSH GULATI
// buggy -c0der
//                   VOID POINTERS
#include<iostream>
using namespace std;
int main()
{
	int a;
	int *p;          /*pointer variable will be used to store the address of integer
	                    variable*/
	void *po;    //void pointer is used here which will not care about pointer data type
	p=&a; 
	po=p;
	a=8;
	cout<<a<<endl;   
	cout<<po<<endl;   //will display the address of a
	cout<<p<<endl;	n
	cout<<*p<<endl;
	return 0;
}
