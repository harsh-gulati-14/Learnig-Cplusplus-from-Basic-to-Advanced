// This code is by HARSH GULATI
// buggy -c0der
//                       DIFFERNEC OF TWO ARRAYS IN A UNSORTED WAYS USING MERGING TECHNIQUE
//                                             USING ARRAYS
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,t,q,r,s;
	int a[10];
	int b[10];
	cout<<"enter the number of elements of array -1"<<endl;
	cin>>q;
	cout<<"enter the number of elements of array -2"<<endl;
	cin>>r;
	int c[q+r]={0};
	cout<<"enter elements of array-1"<<endl;
	for(i=0;i<q;i++)
	{
		cin>>a[i];
	}
	cout<<"enter elements of array-2"<<endl;
	for(i=0;i<r;i++)
	{
		cin>>b[i];
    }
    int p=0,v=0;
    for(i=0;i<q;i++)
    {
    	v=0;
    	for(j=0;j<r;j++)
    	{
    		if(a[i]!=b[j])
    		{
			   v++;
			}
		}
		if(v==r)
		{
			c[p]=a[i];
			p++;
		}
	}
	for(i=0;i<p;i++)
	{
		cout<<c[i]<<" ";
    }
}
//                        USING DYNAMIC MEMORY ALLOCATION
struct array{
	int ar[10];
	int len;
	int s;
};
struct array* diff(struct array* a,struct array* b)
{
	int i,j,k,l;
	struct array *c=(struct array *)malloc(sizeof(struct array *));
	int v=0,p=0;
	for(i=0;i<a->len;i++)
	{
		v=0;
		for(j=0;j<b->len;i++)
		{
			if(a->ar[i]!=b->ar[i])
			{
				v++;
			}
			if(v==b->len)
			{
				c->ar[p]=a->ar[i];
				p++;
			}
		}
	}
	for(i=0;i<p;i++)
	{
		cout<<c->ar[i]<<" ";
	}
}
int main()
{
		struct array a={{3,8,16,20,25},5,10}; // here i will be storing the value of array a
	struct array b={{4,10,12,22,23},5,10}; // values of array 2
// making a object 
	struct array *c;
	c=diff(&a,&b);
}

