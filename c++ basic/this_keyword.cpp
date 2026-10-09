#include<iostream>
using namespace std;
class student
{
  public:
      string name;
      student(string name)
      {
          this->name=name;
      }
      void display()
      {
          cout<<name;
      }
};
int main()
{
    student s1("aysha");
    s1.display();
}
