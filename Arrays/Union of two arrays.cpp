// This code is by HARSH GULATI
// buggy -c0der
//                        UNION OF TWO ARRAYS IN A SORTED WAYS
//                        USING ARRAYS
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
	l=q+r;
	for(i=0;i<q;i++)
	{
		c[i]=a[i];
	}
	int p;
	p=i;
	int v=1;
	for(k=0;k<r;k++)
	{
		v=0;
		for(j=0;j<q;j++)
		if(b[k]!=c[j])
		{
			v++;	
		}
		if(v==q)
		{
			c[p]=b[k];
			p++;
		}
	}
	for(i=0;i<l;i++)
	{
		if(c[i]!=0)
		cout<<c[i]<<" ";
	}
}
//                        USING DYNAMIC MEMORY ALLOCATION
struct array{
	int ar[10];
	int len;
	int s;
};
struct array* uni(struct array* a,struct array* b)
{
	int i,j,k,l;
	struct array *c=(struct array *)malloc(sizeof(struct array *));
	c->len=a->len+b->len;
	for(i=0;i<a->len;i++)
	{
		c->ar[i]=a->ar[i];
	}
	int p=i;
	int v=0;
	for(i=0;i<b->len;i++)
	{
		for(j=0;j<a->len;i++)
		{
			if(b->ar[i]!=c->ar[i])
			{
				v++;
			}
			if(v==a->len)
			{
				c->ar[p]=b->ar[i];
				p++;
			}
		}
	}
	for(i=0;i<c->len;i++)
	{
		cout<<c->ar[i]<<" ";
	}
}
int main()
{
	struct array a={{1,2,3,4,5},5,10};
	struct array b={{1,2,3,4,5,6},6,10};
	struct array *c;
	c=uni(&a,&b);
}
