// This code is by HARSH GULATI
// buggy -c0der
//                        ACCESS STRUCTURES
#include<iostream>
using namespace std;
typedef struct add{          // here we can use typedef which will convert the struct function to the name given at the end 
	int a;
	int b;               // we can make strcutures variable like this and can access thorughout the program
}add;                         // here we need to mention to the new name of structures
int main()
{
	add a={2,3}; //in this way order matters             // in main function we need to just mention it like this and can access it anywhere wheather it may be local or global
	   //or
	add a={.a=2,.b=3} // in this way order doesn't matters
	cout<<a.a+a.b;
}

