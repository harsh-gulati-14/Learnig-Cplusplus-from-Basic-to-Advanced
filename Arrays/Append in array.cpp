// This code is by HARSH GULATI
// buggy -c0der
//                        ARRAYS
#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5};
	int len=5;
	cout<<"LENGTH before "<<len<<endl;
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<" ";  // printing an array before adding
	}
	cout<<endl;
	int x;
	// to append an element at the end 
	cout<<"ENTER THE ELEMENT YOU WANT APPEND"<<endl;
	cin>>x;
	a[len]=x;
	len++;
	cout<<"LENGTH after "<<len<<endl;
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<" ";  // printing an array after append
	}
}
