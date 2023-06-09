//  Default Constructor OR Parameterless Constructor
#include<iostream>
class Demo
{
    public:

    int a;
    int b;

    Demo()
    {
        this->a=10;
        this->b=20;
    }

    // Here we call our own constructor. So compiler didn't take implicitely Synthesize Default Constructor. It will take our user defined constructor

};

int main()
{
    std::cout<<"\n\n************ Default Constructor OR Parameterless Constructor ***********************\n"<<std::endl;
    Demo d;    // Immediately Constructor called after object creation

    std::cout<<"a = "<<d.a<<"\nb = "<<d.b<<std::endl;

    std::cout<<std::endl;
    return 0;
}