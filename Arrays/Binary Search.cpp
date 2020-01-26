// This code is by HARSH GULATI
// buggy -c0der
//                        BINARY SEARCH
#include<iostream>
using namespace std;
///////////////////// BINARY SEARCH WITH STCUTURE AND MEMORY ALLOCATION//////////////////
struct array{
	int a[10];
	int size;
	int length;
};
int bin(struct array arr,int k)
{
	int l=0,h=arr.length-1,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(k==arr.a[mid])
		{
			return mid;
		}
		else if(k<arr.a[mid])
			{
				h=mid-1;
			}
			else{
				l=mid+1;
			}
		}
	}
int main()
{
struct array arr={{0,2,3,4,5},10,5};
	//display(arr);
	int k,l=0;
	cout<<"ENTER THE ELEMENT YOU WANT TO FIND"<<endl;
	cin>>k;
	l=bin(arr,k);
	cout<<l+1;
	//display(arr);
}

