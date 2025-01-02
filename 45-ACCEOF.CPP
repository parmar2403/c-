#include<iostream.h>
#include<conio.h>
class accessSpec
 {
    private:
       int a;
    protected:
       int b;
    public:
       int c;
    accessSpec()
      {
	a=1; b=2; c=3;
      }
    void display()
     {
       cout<<"\n value of a is:"<<a;
       cout<<"\n value of b is:"<<b;
       cout<<"\n value of c is:"<<c;
     }
 };
 class sub_class: public accessSpec
  {
    public:
     sub_class()
      {
	b=1000;
      }
     void displaysub()
      {
	//cout<<"\n sub class value of a is:"<<a;
	cout<<"\n sub class value of b is:"<<b;
	cout<<"\n sub class value of c is:"<<c;
      }
  };
  void main()
   {
     clrscr();
     accessSpec as;
     //as.a=10;
     //as.b=20;
     as.c=30;
     as.display();

     sub_class sc;
     //sc.a=100;
     //sc.b=200;
     sc.c=300;

     sc.displaysub();
     sc.display();
     getch();
   }

