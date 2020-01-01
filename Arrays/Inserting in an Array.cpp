// This code is by HARSH GULATI
// buggy -c0der
//                    ********* ARRAYS ************
#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5};
	int len=5;
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<" ";  // printing an array before
	}
	cout<<endl;
	int i,j,k,l;
	cout<<"ENTER THE ELEMENT AND POSITION WHERE YOU WANT TO INSERT "<<endl;
	cin>>j>>k;
	for(i=len;i>k-1;i--) // 10 is the max length of and array
	{
		a[i]=a[i-1];
	}
	a[k-1]=j;
	len++;
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<" ";  // printing an array after
	}
	/////////////////////////////////////////////////////////////////////////////////
	////// SAME CODE WITH WHILE LOOP/////////////////////////////////////////////////
	i=len;
	while(i!=k-1)
	{
		a[i]=a[i-1];      // IT WILL START RUNNING THE LOOP FROM THE END 
		i--;                /// IT WILL JUST SWAP ALL THE ELEMENT ONE STEP FORWARD
	}
	a[k-1]=j;
	len++;
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<" ";  // printing an array before
	}
}
////////////////////////////////////////////////////////////////////////////////////////////
//////////////////// SAME CODE WITH STRUCTURES ////////////////////////////////////////////
//////////////////// IMPORTANT MEMORY ALLOCATION///////////////////////////////////////////
struct array{
	int a[10];
	int s;
	int len;
};
void display(struct array arr )
{
	int i;
	for(i=0;i<arr.len;i++)
	{
		cout<<arr.a[i]<<" ";
	}
cout<<endl;
}
void append(struct array *arr,int x)
{
	int i,j,k,l;
	if(arr->len<arr->s)      // we know that array is also a pointer variable
	{                        // now here in if statement we will be verifying the length of the array is enough or not 
		arr->a[arr->len++]=x; // and in this step pointer variable arr will be accessing the address and add a element at the end
	}
}
void insert(struct array *arr,int p,int x)
{
	if(p>=0 && p<=arr->len)
	{
		int i;          // it is first checking that the position enter is enough or not
		for(i=arr->len;i>p-1;i--) // and the same thing will be happened
		{
			arr->a[i]=arr->a[i-1];  // this is the syntax for swappinig all the elements 
		}
		arr->a[p-1]=x;          // final inserrtion
		arr->len++;           // incresing the length
	}
int main()
{
	// we will be using address memory allocation and sending address
	struct array arr={{1,2,3,4,5},10,5};
	display(arr);
	int x;
	cout<<"Enter the element you want insert "<<endl;
	cin>>x;
	append(&arr,x);
	display(arr); 
	int j,k;
	cout<<"Enter the element and the position you want to insert "<<endl;
	cin>>j>>k;
	insert(&arr,k,j);
	display(arr);
}
