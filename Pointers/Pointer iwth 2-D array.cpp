// This code is by HARSH GULATI
// buggy -c0der
//                         Pointer iwth 2-D array
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<*(*(a+i)+j);      // this structre can also be used to access the elements of 2_d array
		}
		cout<<endl;
	}
		
	return 0; 
	getch();
}
