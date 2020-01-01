// This code is by HARSH GULATI
// buggy -c0der
//                 ARRAY AS POINTERS
#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5}; // array is pointer itself so it is eays to represent it
	int *p,i;
	for(i=0;i<5;i++)
	{
		cout<<*(a+i)+1<<endl;   //we can access it same like a pointer variable
	}
	return 0;
}
