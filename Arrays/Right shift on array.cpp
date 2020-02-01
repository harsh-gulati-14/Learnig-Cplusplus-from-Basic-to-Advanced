// This code is by HARSH GULATI
// buggy -c0der
//                        RIGHT SHIFT OF AN ARRAY
#include<iostream>
using namespace std;
/////////////////// code with normal//////////////
int main()
{
    int m,n,i,j,k=0,a[100];
    cout<<"enter the number of elemnets in your array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number of times you want to do rigth shift"<<endl;
    cin>>m;
    while(m--)
    {
        k=a[n-1];
        for(i=n-1;i>=0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=k;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
}
///////////////// code with structure and dynamic memory allocation//////////////
// This code is by HARSH GULATI
// buggy -c0der
//                        RIGHT SHIFT OF AN ARRAY
#include<iostream>
using namespace std;
struct array{
	int a[1000];
	int length;
	int size;
};
void right(struct array *arr,int l)
{
	while(l--)
	{
	int i,j,k;
	k=arr->a[arr->length-1];
	for(i=arr->length-1;i>=0;i--)
	{
		arr->a[i]=arr->a[i-1];
	}
	arr->a[0]=k;
	}
}
void display(struct array arr)
{
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int i,j,k,l;
	struct array arr={{1,2,3,4,5},5,10};
	display(arr);
	cout<<"enter the number of time you want to left shift"<<endl;
	cin>>k;
	right(&arr,k);
	display(arr);
}
