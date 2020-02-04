// This code is by HARSH GULATI
// buggy -c0der
//                        APPEND TWO ARRAYS 
//                        USING DYNAMIC MEMORY ALLOCATION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//                        USING ARRAYS
int main()
{
	int i,j,k,l,t;
	int a[10]={1,2,3,4,5};
	int b[10]={5,6,7,8,1};
	int c[10]={0};
	l=5;
	k=5;
	for(i=0;i<10;i++)
	{
		if(i<5)
		{
			c[i]=a[i];
		}
		else{
			c[i]=b[i-5];
		}
	}
	for(i=0;i<10;i++)
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
struct array *append(struct array *a,struct array *b)
{
	struct array *c=(struct array*)malloc(sizeof(struct array*));
	c->len=a->len+b->len;
	int i;
	for(i=0;i<c->len;i++)
	{
		if(i<a->len)
		{
			c->ar[i]=a->ar[i];
		}
		else{
			c->ar[i]=b->ar[i-a->len];
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
	struct array b={{1,2,3,4,5},5,10};
	struct array *c;
	c=append(&a,&b);
}
