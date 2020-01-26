// This code is by HARSH GULATI
// buggy -c0der
//                        REVERSE AN ARRAY
#include<bits/stdc++.h>
using namespace std;
///////////////////// REVERSE AND ARRAY WITH STCUTURE AND MEMORY ALLOCATION//////////////////
struct array{
	int a[10];
	int size;
	int length;
};
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
// this function rev is for reversing an array using a temporary array and to print it
void rev(struct array *arr)
{
	int *b;
	int i,j;
	b=(int*)malloc(arr->length+1*sizeof(int));
	for(i=arr->length-1,j=0;i>=0;i--,j++)
	{
		b[j]=arr->a[i];
	}
	for(i=0;i<=arr->length-1;i++)
	{
		arr->a[i]=b[i];
	}
	for(i=0;i<=arr->length-1;i++)
	{
	
		cout<<arr->a[i]<<" ";
	}
	cout<<endl;
}
// this is a function which is used to reverse and array using a function swap which will swap the variable
void rev2(struct array *arr)
{
	int i,j,k;
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		swap(&arr->a[i],&arr->a[j]);
	}
	for(i=0;i<arr->length;i++)
	{
		cout<<arr->a[i]<<" ";
	}
}
int main()
{
	struct array arr={{5,4,3},10,3};
	int k;
	rev(&arr);
	rev2(&arr);
}
