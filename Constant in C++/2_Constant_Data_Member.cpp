//  Constant Data Member
//  Use to keep data member constant for objects
#include<iostream>
class Demo
{
    public:
    const int a;
    int b;

    // Constant variable must be initialized and cannot be assigned
    Demo(int x):a(10)
    {
        b=50;
        // Here only non constant data members can be assigned
    }
    
};

int main()
{
    Demo d1(10);
    std::cout<<"d1.a = "<<d1.a<<"\nd1.a = "<<d1.b<<std::endl<<std::endl;
    Demo d2(20);
    std::cout<<"d2.a = "<<d2.a<<"\nd2.a = "<<d2.b<<std::endl;
    // Now a got different values for diferent objects

    return 0;
}