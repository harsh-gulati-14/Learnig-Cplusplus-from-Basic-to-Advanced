// This code is by HARSH GULATI
// buggy -c0der
//                 POINTERS TO POINTERS

#include<iostream>
using namespace std;
int main()
{
	int a;
	int *p;          /*pointer variable will be used to store the address of integer
	                    variable*/
	int **po;     //this is a pointer to pointer variable which will point on __p__
	p=&a; 
	po=&p;
	a=8;
	cout<<a<<endl;   
	cout<<po<<endl;   //will display the address of a
	cout<<p<<endl;	
	cout<<*p+1<<endl;  
	return 0;
}
