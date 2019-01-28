#include<iostream>
using namespace std;
class add
{
int a,b,c;
public:
add()
{
a=10;
b=5;
}
void cal()
{
c=a+b;
cout<<c;
}
};
int main()
{
add a;
a.cal;
return 0;
}
