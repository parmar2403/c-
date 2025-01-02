#include<iostream.h>
#include<conio.h>
class arithconst
{
 public:
 float x,y,a;
 arithconst()
 {
  x=50.5;
  y=30.5;
 }
 arithconst(float x)
 {
   x=a;
   y=20.5;
 }
 arithconst(float a,float b)
 {
   x=a;
   y=b;
 }
 void addition()
 {
   cout<<"\n addition is:"<<(x+y);
 }
 void substraction()
 {
   cout<<"\n substraction is:"<<(x-y);
 }
 void multiplication()
 {
   cout<<"\n multiplication is:"<<(x*y);
 }
 void divison()
 {
   cout<<"\n divison is:"<<(x/y);
 }
 //void modulus(){ cout<"\n modulus is:"<<(x%y); }
};

void main()
{
  clrscr();
 arithconst ac1;
 arithconst ac2(10.5);
 arithconst ac3(5.5,5.5);
 cout<<"\n default constructor data:";
 ac1.addition();
 ac1.substraction();
 ac1.multiplication();
 ac1.divison();
 //ac1.modulus();

 cout<<"\n single parameter constructor data:";
 ac2.addition();
 ac2.substraction();
 ac2.multiplication();
 ac2.divison();
 //ac2.modulus();

 cout<<"\n two parameter constructor data:";
 ac3.addition();
 ac3.substraction();
 ac3.multiplication();
 ac3.divison();
 //ac3.modulus();
 getch();
}




