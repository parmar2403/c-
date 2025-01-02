#include<iostream.h>
#include<conio.h>
class test
{
  int A;
  void readData();
  public:
  void inputdata(int a);
};
void main()
{
 clrscr();
 int val;
 cout<<"\n enter value:"; cin>>val;
 test t1,t2,t3;
 t1.inputdata(val);
 cout<<"\n enter value:"; cin>>val;
 t2.inputdata(val);
 cout<<"\n enter value:"; cin>>val;
 t3.inputdata(val);
 getch();
}
void test::readData()
{
  cout<<"\n value is:"<<A;
}
void test::inputdata(int a)
{
  A=a;
  readData();
}