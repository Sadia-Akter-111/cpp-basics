#include<iostream>
using namespace std;
class student
{
public:
   int id;
   double gpa;
   void display()
   {
       cout<<id<<"  "<<gpa<<endl;
   }
   void setvalue(int x,double y)
   {
       id=x;
       gpa=y;
   }
};
int main()
{
    student sadia,aysha;
   // sadia.id=541;
    //sadia.gpa=3.71;
    sadia.setvalue(541,3.71);
  sadia.display();
   // cout<<"sadia: " <<sadia.id<<endl<<sadia.gpa<<endl;
    //aysha.id=517;
    //aysha.gpa=3.73;
    aysha.setvalue(517,3.73);
    aysha.display();
   // cout<<"Aysha: "<<aysha.id<<endl<<aysha.gpa;
}
