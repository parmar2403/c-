#include<iostream.H>
#include<conio.h>
class demo1
 {
   public:
    void display1()
     {
       cout<<"demo1 class method called"<<endl;
     }
 };
 class demo2
  {
    public:
     void display2()
      {
	cout<<"demo2 class method called"<<endl;
      }
  };
 class derived:public demo1,public demo2
   {
     public:
     void dispderived()
      {
	cout<<"derived class method called"<<endl;
      }
   };
   void main()
    {
     clrscr();
     derived obj;
     obj.display1();
     obj.display2();
     obj.dispderived();
     getch();
   }