 #include<iostream>
 using namespace std;
 class programmer
 {
 private:
    string name;
 public:
    void setName(string Newname)
    {
        name=Newname;
    }
    string getName()
    {
        return name;
    }
 };
 int main()
{
    programmer p;
    p.setName("sadia");
    cout<<"Name :"<<p.getName();
}
