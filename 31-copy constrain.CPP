#include<iostream.h>
#include<conio.h>
class demoa
 {
   public:
   demoa()
       {
	 cout<<"\n from demoa constructor..";
       }
   void message()
       {
	 cout<<"good morning";
       }
 };

   class demob
    {
      public:
      demob(demoa d)
       {
	 d.message();
       }
    };
 void main()
  {
    clrscr();
    demoa da;
    demob db(da);
    getch();
  }





































