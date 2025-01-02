#include<iostream.h>
#include<conio.h>
class time
{
  int hrs,min;
  public:
       time(int a,int b)
       {
	 cout<<"\n constructor called with two parameters..."<<endl;
	 hrs=a; min=b;
       }
    operator int();
    ~time()
     {
       cout<<"\n destrucyor called...."<<endl;
     }
};
time::operator int()
 {
   cout<<"\n class type to basic type conversion..."<<endl;
   return(hrs*60+min);

 }

 void main()
 {
   clrscr();
   int h,m,duration;
   cout<<"\n enter hours";
   cin>>h;
   cout<<"\n enter minutes";
   cin>>m;
   time t(h,m);
   duration=t;
   cout<<"\n total minutes are"<<duration;
   cout<<"\n 2nd method operator overloading"<<endl;
   duration=t.operator int();
   cout<<"\ntotal minutes are"<<duration;
   getch();
 }