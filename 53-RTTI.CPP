#include<iostream.h>
#include<conio.h>
class B { };
class D : public B{ };
int main()
{
  clrscr();
  B*b=new D;
  D*d=dynamic_cast<D*>(b);
  if(d!=NULL)
   cout<<"works";
  else
   cout<<"cannot cast B* to D*";
    getch();
   return 0;
}
