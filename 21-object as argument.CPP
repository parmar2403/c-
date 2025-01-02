#include<iostream.h>
#include<conio.h>
class mycalc
{
  int val;
  public:
    void inputdata(int v)
     {
       val=v;
     }
    void sum(mycalc m1,mycalc m2)
     {
       cout<<"sum of two class object value is:"<<(m1.val + m2.val);
     }
};

void main()
{
 int value;
 clrscr();
 mycalc c1,c2,c3;
 cout<<"enter value:";
 cin>>value;
 c1.inputdata(value);
 cout<<"enter the value:";
 cin>>value;
 c2.inputdata(value);
 c3.sum(c1,c2);
 getch();
}








