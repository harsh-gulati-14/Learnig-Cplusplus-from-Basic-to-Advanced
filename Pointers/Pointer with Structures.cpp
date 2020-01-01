// This code is by HARSH GULATI
// buggy -c0der
//                        POINTERS WITH STRUCTURES
#include<iostream>
using namespace std;
typedef struct add{          
	int a;
	int b;               
}add;                         
int main()
{
	add a;    
	add *p=&a; // here we have created a pointer memeber of that particluar structures
	p->a=20;  // here this is a special syntax used for accessing the member with pointers
	cout<<a.a;  
	cout<<(*p).a; // same syntax only
}

