// This code is by HARSH GULATI
// buggy -c0der
//                 FUNCTION WITH POINTERS

#include<iostream>
using namespace std;
void fun(int *p)
{
	*p=*p+1;
	cout<<*p<<endl;
}
int main()
{
	int a;
	int *p;          /*pointer variable will be used to store the address of integer
	                   variable*/
	p=&a;
	a=8;
	fun(&a);   /*now here we have send the address of the integer  variable and the
	pointer vavriable in fun() will work on this address and this process will be 
	a call by refrence */
	cout<<a<<endl;	//it will also change the value of a in main function
	return 0;
}
