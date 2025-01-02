#include<iostream.h>
#include<conio.h>
class something
 {
   private:
   int m_value1;
   double m_value2;
   char m_value3;

   public:
     something():m_value1(1),m_value2(2.2),m_value3('c') //directly initialize our member variables
      {
	 //no need for assignment here
      }
   void print()
    {
      cout<<"something("<<m_value1<<","<<m_value2<<"," <<m_value3<<")\n";
    }
 };
 int main()
  {
    something something;
    something.print();
    return 0;
  }