// This code is by HARSH GULATI
// buggy -c0der
//                        SHIFTING ALL -ve ELEMENTS TO LEFT AND +ve TO RIGHT
#include<iostream>
using namespace std;
int main()
{
	int k,l;
	int a[10]={-6,8,9,-9,1,-10};
	int i=0,j=6;
	while(i<j)
	{
		
		while(a[i]<0)
		{
			i++;
		}
		
		while(a[j]>=0)
		{
			j--;
		}
		if(i<j)
		{
			int t;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	for(i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
