#include<iostream.h>
#include<conio.h>
class demoA
     {
       public:
       int a;
       demoA()
	 {
	   cout<<"\n good morning from demoA constructor..";
	 }
	 void displayA()
	   {
	      cout<<"\n value of a is"<<a;
	   }
     };
class demoB :public demoA
   {
     public:
     int b;
     demoB()
       {
	  cout<<"\n good morning from demoB constructor..";
       }
     void displayB()
      {
	cout<<"\n value of B is:"<<b;
      }
   };
   class demoC :public demoB
   {
     public:
     int c;
     demoC()
       {
	  cout<<"\n good morning from demoB constructor..";
       }
     void displayC()
      {
	cout<<"\n value of C is:"<<c;
      }
   };
void main()
  {
    clrscr();
    demoC C1;
    C1.a=10;
    C1.b=20;
    C1.c=30;
    C1.displayA();
    C1.displayB();
    C1.displayC();
    getch();
  }