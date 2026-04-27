#include<iostream>
#include<cmath>
using namespace std;
class number
{
   int a,b;
   public:
   number()
   {
      a=0;
      b=0;
   }
   number(int x,int y)
   {
      a=x;
      b=y;
   }
   void display()
   {
      cout<<a<<"+j"<<b;
   }
   number operator-(number c)
   {
      number temp;
      temp.a=a-c.a;
      temp.b=b-c.b;
      return temp;
   }
   number operator*(number c)
   {
      float m1,m2,t1,t2;
      m1=sqrt(a*a+b*b);
      t1=atan2(b,a);
      m2=sqrt(c.a*c.a+c.b*c.b);
      t2=atan2(c.b,c.a);
      float m=m1*m2;
      float t=t1*t2;
      number temp;
      temp.a=m*cos(t);
      temp.b=m*sin(t);
      return temp;
   }
};
int main()
{
   number n1(5,6);
   number n2(6,4);
   number n3=n1-n2;
   cout<<"sub is:";
   n3.display();
   number n4=n1*n2;
   cout<<"mult is:";
   n3.display();
}
