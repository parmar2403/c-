#include<iostream.h>
#include<conio.h>
class constover
 {
   public:
      int grno;
      constover()
	{
	  cout<<"\n hii i am default constructor...";
	}
      constover(int grno)
       {
	 constover::grno=grno;
	 cout<<"\n constructor one parameterized:"<<grno;
       }
      constover(int grno,char*nm)
       {
	 constover::grno=grno;
	 cout<<"\n constructor two parameterized:";
	 cout<<"\n grno is:"<<grno<<"and student name is:"<<nm;
       }
 };
 void main()
  {
    constover cn1;
    constover cn2(234);
    constover cn3(2234,"nandani");
    getch();
  }