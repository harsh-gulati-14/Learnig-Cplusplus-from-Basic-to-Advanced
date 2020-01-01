// This code is by HARSH GULATI
// buggy -c0der
//                         STRUCTURES
#include<iostream>
using namespace std;
struct add{
	int a;
	int b;               // we can make strcutures variable like this and can access thorughout the program
};
int main()
{
	struct add a;
	a.a=2;
	a.b=2;
	cout<<a.a+a.b;
}

