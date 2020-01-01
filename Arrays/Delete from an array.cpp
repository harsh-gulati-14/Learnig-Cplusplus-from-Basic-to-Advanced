// This code is by HARSH GULATI
// buggy -c0der
//                        DELETE FROM AN ARRAY
#include<iostream>
using namespace std;
//////////////////////////USING STRUCTURE ///////////////////////////////////////////
///////////////////////*******IMPORTANT FOR MEMORY ALLOCATION CONCEPT******/////////
struct array{
	int a[10];
	int s;
	int len;
};
void display(struct array arr)
{
	for(int i=0;i<arr.len;i++)
	{
		cout<<arr.a[i]<<" ";
	}
	cout<<endl;
}
void del(struct array *arr,int p)
{
	int i;
	if(p<=arr->len)
	{
		for(i=p-1;i<arr->len-1;i++)
		{
			arr->a[i]=arr->a[i+1];
		}
		arr->len--;
	}
}
int main()
{
	struct array arr={{1,2,3,4,5},10,5};
	int p;
	display(arr);
	cout<<"ENTER THE POSITION OF THE ELEMENT YOU WANT TO DELETE"<<endl;
	cin>>p;
	del(&arr,p);
	display(arr);
}
int main()
{
	int a[]={1,2,3,4,5};
	int i,p,len=5;
	cout<<"ENTER THE ELEMENT POSITION YOU WANT TO DELETE"<<endl;
	cin>>p;
	if(p<=len)
	{
///////////////// WITH FOR LOOP//////////////////////////////////////////////////////////////////
	for(i=p-1;i<len-1;i++)
	{
		a[i]=a[i+1];
	}
	len--;
    }
	else
	cout<<"WRONG INPUT"<<endl;
	for(i=0;i<len;i++)
	{
		cout<<a[i]<<" ";
	}
}
/////////////////////////////WITH WHILE LOOP////////////////////////
if(p<=len)
	{
		i=p-1;
	while(i<=len-1)
	{
		a[i]=a[i+1];
		i++;
	}
	len--;
    }

