//  Static Data Member
#include<iostream>
class Demo
{
    public:
    int a;
    static int b;   // Only declared
};

int Demo::b=10;     // Got memory now

int main()
{
    Demo d;
    std::cout<<"d.a = "<<d.a<<std::endl;
    d.a=20;
    std::cout<<"d.a = "<<d.a<<std::endl;

/*
    std::cout<<"d.a = "<<Demo::a<<std::endl;
    a is a non-static Data Member. It only be accessible by object name. Not accessible by class name.
*/

    std::cout<<"d.b = "<<d.b<<std::endl;
    std::cout<<"Demo::b = "<<Demo::b<<std::endl;
    // b is static data member. It can be aacessible by both classname and by object


    return 0;
}