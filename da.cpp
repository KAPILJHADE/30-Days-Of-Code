#include<iostream>
using namespace std;

	int Add(int x, int y=20, int z=30)
	{

		return (x + y + z);

	}


	int main()
	{

		int rs;

		rs = Add(5);
		cout<<"\n\tThe sum is : "<<rs;

		rs = Add(4,8);
		cout<<"\n\tThe sum is : "<<rs;

		rs = Add(7,3,4);
		cout<<"\n\tThe sum is : "<<rs;

        return 0;

	}