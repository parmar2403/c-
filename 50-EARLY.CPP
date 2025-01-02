#include<iostream.h>
#include<conio.h>
 class base
  {
      public:
       void display(int x=10)
	{
	  cout<<"\n hellowww good byeee....";
	  cout<<"\n base value of x is:"<<x;
	}
 };
 class derived:public base
  {
      public:
       void display(int x=100)
	{
	  cout<<"\n thamk you for calling me...";
	  cout<<"\n derive value of x is:"<<x;
	}
 };
 void main()
  {
     clrscr();
     base *b=new derived();
     b->display();
     b->display(1000);
     getch();
  }