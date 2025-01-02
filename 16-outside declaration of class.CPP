#include<iostream.h>
#include<conio.h>
class demoa
{
  public:
  char*user;
  void welcomeuser(char*c);
  void displayuser();
};
 void main()
 {
  clrscr();
  char*ch;
  cout<<"enter user name:";
  cin>>ch;
  demoa da;
  da.welcomeuser(ch);
  da.displayuser();
  getch();
 }
 void demoa::welcomeuser(char*c)
 {
   user=c;
 }
 void demoa::displayuser()
 {
  cout<<"welcome"<<user<<"into c++ ooprogramming...";
 }