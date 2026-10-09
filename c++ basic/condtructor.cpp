
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
   student(int x,double y)//constructor
   {
       id=x;
       gpa=y;
   }
   student()//default constructor
   {
       cout<<"student"<<endl;
   }
};
int main()
{
    student ob;
    student sadia(541,3.71);

  sadia.display();
    student aysha(517,3.73);
    aysha.display();

}
