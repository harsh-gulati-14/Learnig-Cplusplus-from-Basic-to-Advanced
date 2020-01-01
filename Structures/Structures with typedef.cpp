// This code is by HARSH GULATI
// buggy -c0der
//                         STRUCTURES
#include<iostream>
using namespace std;
typedef struct add{          // here we can use typedef which will convert the struct function to the name given at the end 
	int a;
	int b;               // we can make strcutures variable like this and can access thorughout the program
}add;                         // here we need to mention to the new name of structures
int main()
{
	add a;              // in main function we need to just mention it like this and can access it anywhere 
	a.a=2;              // wheather it may be local or global
	a.b=3;
	cout<<a.a+a.b;
}

