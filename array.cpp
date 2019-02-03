#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int *p;
	p=&a[0];
	cout<<*p<<endl;
	cout<<*(p+1)<<endl;
	cout<<*(p+2)<<endl;
	cout<<*(p+3)<<endl;
	cout<<*(p+4)<<endl;
}
