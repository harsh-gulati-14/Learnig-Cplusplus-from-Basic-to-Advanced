// This code is by HARSH GULATI
// buggy -c0der
//                 INTRO TO POINTERS
#include<iostream>
using namespace std;
int main()
{
	int a;
	int *p;          /*pointer variable will be used to store the address of integer
	                    variable*/
	p=&a; 
	a=8;
	cout<<a<<endl;   
	cout<<p<<endl;   //will display the address of a
	cout<<*p<<endl;
	return 0;
}
