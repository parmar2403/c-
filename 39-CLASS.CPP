#include<iostream.h>
#include<conio.h>
class inventory1
 {
   int ino,qty;
   float rate;
   public:
      inventory1(int n,int q,float r)
       {
	 ino=n; qty=q; rate=r;
       }
      inventory1()
       {
	 cout<<"\n inventory's object created";
       }

      int getino()
       {
	  return(ino);
       }
      float getamt()
       {
	 return (qty*rate);
       }
      void display()
      {
	cout<<endl <<"ino="<<ino<<"qty="<<qty<<"rate="<<rate;
      }
  };
   class inventory2
    {
      int ino;
      float amount;
      public:

      void operator=(inventory1 i)
       {
	 ino=i.getino();
	 amount=i.getamt();
       }
      void display()
       {
	 cout<<endl<<"ino="<<ino<<"amount="<<amount;
       }
   };
   void main()
    {
      clrscr();
      inventory1 i1(1001,30,75);
      inventory2 i2;
      i2=i1;
      i1.display();
      i2.display();
     getch();
   }