// This code is by HARSH GULATI
// buggy -c0der
//                        LINEAR SEARCH
#include<iostream>
using namespace std;
///////////////////// LINEAR SEARCH WITH STCUTURE AND MEMORY ALLOCATION//////////////////
struct array{
	int a[10];
	int size;
	int length;
};
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
/////////////////////////////////////////////////////////////////////////////////////////////
///////////NOW NOTE THAT TO IMPROVE LINEAR SEARCH WE WILL IMPLEMENT TWO METHODS ////////
///////////1.TRANSPOSITION  AND 2.MOVE TO FRONT/HEAD//////////////////////////////////
///// WITH THESE METHOD TIME COMPLEXITY OF THE PROGRAM WILL REDUCE//////////////////
///// WE WILL JUST SWAP THE ELEMENTS IN THIS TO DECREASE THE TIME COMPLEXITY///////
///// IN TRANSPOSITION WE WILL SWAP THEM ONE STEP BACK A[I]=A[I-1]///////////////
//////////// AND IN MOVE TO FRONT WE WILL SWAP THEM FROM THE FIRST POSITION///////
void search(struct array *arr,int key)
{
	for(int i=0;i<arr->length;i++)
	{
		if(key==arr->a[i])
		{
			swap(&arr->a[i],&arr->a[i-1]); // transposition
			swap(&arr->a[i],&arr->a[0]);    // move to front technique
			cout<<"ELEMENT FOUND AT "<<i+1<<endl;
		}
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
	struct array arr={{5,4,3,2,1},10,5};
	display(arr);
	int k;
	cout<<"ENTER THE ELEMENT YOU WANT TO FIND"<<endl;
	cin>>k;
	search(&arr,k);
	display(arr);
}
/////////////// SAME CONCEPT WITH FOR LOOP/////////////////////////
int main()
{
	int i,k;
	int a[10]={1,2,3,4,5};
	cout<<"ENTER KEY ELEMENT"<<endl;
	cin>>k;
	for(i=0;i<10;i++)
	{
		if(k==a[i])
		{
			cout<<"ELEMENT FOUND AT "<<i+1<<endl;
		}
	}
}
//////////////////////////////SAME CONCEPT WITH WHILE LOOP/////////////////////////////
int main()
{
	int i,k;
	int a[10]={1,2,3,4,5};
	cout<<"ENTER KEY ELEMENT"<<endl;
	cin>>k;
	i=0;
	while(i<10)
	{
		if(k==a[i])
		{
			cout<<"ELEMENT FOUND AT "<<i+1<<endl;
		}
		i++;
	}
}
