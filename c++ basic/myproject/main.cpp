#include <iostream>
#include "my1stclass.h"
using namespace std;

int main()
{
    my1stclass ob1;
    my1stclass *p =&ob1;
    p-> display();
    return 0;
}
