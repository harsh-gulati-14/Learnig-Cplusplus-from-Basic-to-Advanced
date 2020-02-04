// This code is by HARSH GULATI
// buggy -c0der
//                        INTERSECTION OF TWO ARRAYS IN A SORTED WAYS
//                                   USING ARRAYS
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
	int v=0,p=0;
	for(i=0;i<q;i++)
	{
		v=0;
		for(j=0;j<r;j++)
		{
			if(a[i]==b[i])
			v++;
		}
		if(v>0)
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
//                                   USING DYNAMIC MEMORY ALLOCATION
struct array{
	int ar[10];
	int len;
	int s;
};
struct array *inte(struct array *a,struct array *b)
{
	struct array *c=(struct array*)malloc(sizeof(struct array *));
	int i,j,k,l,v=0,p=0;
	for(i=0;i<a->len;i++)
	{
		v=0;
		for(j=0;j<b->len;j++)
		{
			if(a->ar[i]==b->ar[i])
			v++;
		}
		if(v>0)
		{
			c->ar[p]=a->ar[i];
			p++;
		}
	}
	for(i=0;i<p;i++)
	{
		cout<<c->ar[i]<<" ";
	}
	
}
int main()
{
	struct array a={{1,2,3,4,5},5,10};
	struct array b={{1,2,3,4,89},5,10};
	struct array *c;
	c=inte(&a,&b);
}
