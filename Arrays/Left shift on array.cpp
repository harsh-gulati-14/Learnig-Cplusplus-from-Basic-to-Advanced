// This code is by HARSH GULATI
// buggy -c0der
//                        LEFT SHIFT OF AN ARRAY
#include<iostream>
using namespace std;
//////////////////////   THIS PART OF CODE IS WRITTEN IN NORMAL ARRAY DECLARATION////////////////////////////////////////
void left(int a[1000],int n,int l)
{
	while(l--)
	{
	int i,j,k=0;
		k=a[0];
	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	a[i-1]=k;
}
for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int i,j,k,a[1000];
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the number of time you want to do left shift"<<endl;
	cin>>k;
	left(a,5,k);
}
///////////////////////////////////////////////////////////////////////////////////this part of the code is using structures///////////////////////
struct array{
	int a[1000];
	int length;
	int size;
};
void left(struct array *arr,int l)
{
	while(l--)
	{
	int i,j,k;
	k=arr->a[0];
	for(i=0;i<arr->length;i++)
	{
		arr->a[i]=arr->a[i+1];
	}
	arr->a[i-1]=k;
	}
}
void display(struct array arr)
{
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int i,j,k,l;
	struct array arr={{1,2,3,4,5},5,10};
	display(arr);
	cout<<"enter the number of time you want to left shift"<<endl;
	cin>>k;
	left(&arr,k);
	display(arr);
}
