// This code is by HARSH GULATI
// buggy -c0der
//                         CHARACTER WITH POINTERS
#include<iostream>
using namespace std;
void print(char *c)           
{                                // it will take that character in it and will display
	while(*c!='\0')
	{
		cout<<*c;
		c++;           // this is the increment of the address of the character array
	}
	cout<<endl;
}
int main()
{
	char a[20]="HARSH";
	char *c;                    //character array is also like a character pointer only
	int i;
	c=a;
	for(i=0; *(c+i)!='\0';i++)
	{
		cout<<*(c+i);
	}
	cout<<endl;
	print(a);              // noew here we send our character in this function
	return 0; 
}
