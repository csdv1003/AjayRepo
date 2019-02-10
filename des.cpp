#include<iostream>
using namespace std;
class des
{
  public:
  des()
  {
  cout<<"cons called";
  }
~des()
{
cout<<"des called";
}
 
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
