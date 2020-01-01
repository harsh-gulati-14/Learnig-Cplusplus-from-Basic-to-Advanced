// This code is by HARSH GULATI
// buggy -c0der
//                         ARRAY WITH STRUCTURES
#include<iostream>
using namespace std;
typedef struct add{          
	int a;
	int b;               
}add;                         
int main()
{
	add a[3];    // here we have created an array of structres in which each element of the array acn access each element of structure
	for(int i=0;i<3;i++)
	{
		cin>>a[i].a;
		cin>>a[i].b;
	}
	for(int i=0;i<3;i++)
	{
		cout<<a[i].a<<endl;
		cout<<a[i].b;
	}
}

