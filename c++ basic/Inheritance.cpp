#include<iostream>
using namespace std;
class person{
public:
    string name;
    int age;
    void display1()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};
class student :public person{

public:
    int id;
    void display2()
    {
        cout<<"ID: "<<id<<endl;
        display1();
    }
};



int main()
{
    student s1;
    s1.id=541;
    s1.name="sadia";
    s1.age=21;
    s1.display2();
}
