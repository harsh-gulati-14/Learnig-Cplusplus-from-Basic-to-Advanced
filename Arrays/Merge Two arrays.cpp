// This code is by HARSH GULATI
// buggy -c0der
//                        MERGE TWO ARRAYS IN A SORTED WAYS
//                        USING DYNAMIC MEMORY ALLOCATION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct array{
	int ar[10];
	int len;
	int s;
};
struct array* merge(struct array *a,struct array *b)  // here we will make the type of structure because a pointer is being called 
{
	struct array* c=(struct array*)malloc(sizeof(struct array *));
	int i,j,k,l;  
	i=0;
	j=0;
	k=0;
	while(i<a->len && j<b->len)
	{
		if(a->ar[i]<b->ar[j])
		{
			c->ar[k++]=a->ar[i++];
		}
		else{
			c->ar[k++]=b->ar[j++];
		}
	}
	for(;i<a->len;i++)
	{
		c->ar[k++]=a->ar[i++];
	}
	for(;j<b->len;j++)
	{
		
		c->ar[k++]=b->ar[j++];
	}
	c->len=a->len+b->len;
	for(i=0;i<c->len;i++)
	{
		cout<<c->ar[i]<<" ";
	}
}
int main()
{
	struct array a={{3,8,16,20,25},5,10}; // here i will be storing the value of array a
	struct array b={{4,10,12,22,23},5,10}; // values of array 2
	struct array *c;   // making a object of type pointer which will act linke the array in which we will merge
	c=merge(&a,&b);  // we will send the address of array a and array b
}
// This code is by HARSH GULATI
// buggy -c0der
//                        MERGE TWO ARRAYS IN A SORTED WAYS
//                             USING ARRAYS
#include<iostream>
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int a[5]={3,8,16,20,25};
	int b[5]={4,10,12,22,23};
	int c[10]={0,0,0,0,0,0,0,0,0,0};
	int m=5,n=5;
	i=0;j=0;k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])                   // merging is bascically to merge two arrays in a sorted way
		{
			c[k++]=a[i++];         // the element which is small in there respectivearray will come and 
		}                         // there reference pointer (i/j) will be incremented  w.r.t k
		else{                    
			c[k++]=b[j++];
		}
	}                  // while loop will break if one of the condition will be true that means
	for(;i<m;i++)      // one array will be successfully copied to C and in another one element will be still 
	{                  // remaining will be copied directly
		c[k++]=a[i];
	}
	for(;j<m;j++)
	{                     // this is the syntax of it if (i==n) and j is still pending
		c[k++]=b[j];
	}
	for(i=0;i<10;i++)
	{
		cout<<c[i]<<" ";
	}
}
