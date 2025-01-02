#include<iostream.h>
#include<conio.h>
class time
 {
    int hrs,min;
    public:
    time(int t)
     {
       cout<<"basic type to ==>class type conversion.."<<endl;
       hrs=t/60;
       min=t%60;
     }
    void display();
};
   void time::display()
    {
      cout<<hrs<<":hours(s)"<<endl;
      cout<<min<<"minutes"<<endl;
    }
   void main()
   {
     clrscr();
     int duration;
     cout<<"enter time duration in minutes";
     cin>>duration;
     time t1=duration;
     t1.display();
     getch();
   }