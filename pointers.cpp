#include<iostream>
using namespace std;
int main()
{
	int a=2,b=4,c=6,d=10;
	int *ptr1,*ptr2,*ptr3,*ptr4;
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	ptr4=&d;
	cout<<"ptr1+ptr2: "<<ptr1 + 3<<endl;
	cout<<"ptr4-ptr1: "<<ptr4-5<<endl;
	//cout<<"ptr2*ptr3: "<<ptr2* 4<<endl;
	//cout<<"ptr4/ptr1: "<<ptr4/(1);
	cout<<ptr1++;
	cout<<ptr2--;
}
