#include<iostream>
using namespace std;
class des
{
  des()
  {
  cout<<"cons called";
  }
~des()
{
cout<<"des called";
}
  public:
  void dis()
  {
  cout<<"code for cons and des";
  }
};
int main()
{
des d;
  d.dis();
}
