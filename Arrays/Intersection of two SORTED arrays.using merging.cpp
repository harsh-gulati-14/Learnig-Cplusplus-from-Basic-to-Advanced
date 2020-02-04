// This code is by HARSH GULATI
// buggy -c0der
//                        INTERSECTION OF TWO ARRAYS IN A SORTED WAYS USING MERGING TECHNIQUE
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
	k=0;
	i=0;j=0;
	while(i<q && j<r)
	{
		if(a[i]>b[j])       // NOW HERE THE ELEMENT WHICH IS SMALLER THAT REFRENCE POINTER WILL INCREMENT
		{
			j++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else{
			c[k++]=a[i++];     // THIS IS THE COMDITION TO CHECK IF THE ELEMENTS ARE SAME THE TAKE ONLY ONE OF THEM AND JUST INCREAES THE REFFRENCE POINTERS
			j++;
		}
	}
	for(i=0;i<k;i++)
	{
		cout<<c[i]<<" ";
	}
}
//                                USING DYNAMIC MEMORY ALLOCATION
struct array{
	int ar[10];
	int len;
	int s;
};
struct array * inte(struct array *a,struct array *b)
{
	struct array *c=(struct array*)malloc(sizeof(struct array *));
	int i=0,j=0,k=0;
	while(i<a->len && j<b->len)
	{
		if(a->ar[i]<b->ar[j])
		{
			i++;
		}
		else if(a->ar[i]>b->ar[j])
		{
			j++;
		}
		else{
			c->ar[k++]=b->ar[j++];
			i++;
		}
}
	for(i=0;i<k;i++)
	{
		cout<<c->ar[i]<<" ";
	}
}
int main()
{
	struct array a={{1,2,3,4,5},5,10};
	struct array b={{1,2,3,5,89},5,10};
	struct array *c;
	c=inte(&a,&b);
}
