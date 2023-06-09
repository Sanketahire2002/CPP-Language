//  Constant Data Member
//  Use to keep data member constant for objects
#include<iostream>
class Demo
{
    public:
    const int a;
    int b;

    // Constant variable must be initialized and cannot be assigned
    Demo():a(10),b(20)  // Non constant data members also can be declared here
    {
        b=500;
        // Here only non constant data members can be assigned
        //If we declare at both places then it will take value inside constructor
    }
    
};

int main()
{
    Demo d1;
    std::cout<<"d1.a = "<<d1.a<<"\nd1.a = "<<d1.b<<std::endl<<std::endl;
    Demo d2;
    std::cout<<"d2.a = "<<d2.a<<"\nd2.a = "<<d2.b<<std::endl;
    // d2.a=50; because a is constant
    // But here value of a is same for all objects
    // Now overcome that problem by parameterised constructor. See next program

    return 0;
}