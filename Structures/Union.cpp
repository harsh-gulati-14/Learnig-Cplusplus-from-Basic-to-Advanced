// This code is by HARSH GULATI
// buggy -c0der
//                        UNION
#include<iostream>
using namespace std;
struct store{
	double price;
	union       // this is a union in which i can make differenrt structures based on the demand
	{            // it is basically very useful in definig size of a particular structure
		struct   // because the common size is take in this ***************
		{
		    int pages;
		}book;
		struct{
			int color;
		}shirt;
   }item;
}s;
int main()
{
	struct store s;
	s.item.book.pages=3;
	cout<<s.item.book.pages;
	return 0;
}
