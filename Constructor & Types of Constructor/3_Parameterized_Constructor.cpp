//  Parameterized Constructor
#include<iostream>
class Demo
{
    public:

    int a;
    int b;

    Demo(int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    // Here we call our own parameterized constructor. So compiler didn't take implicitely Synthesize Default Constructor. It will take our user defined constructor.

};

int main()
{
    std::cout<<"\n\n************ Parameterized Constructor ***********************\n"<<std::endl;
    
    Demo d1(10,20);    // Immediately Constructor called after object creation
    // It automatically find its appropriate constructor according to passing parameters
    std::cout<<"Object d1 :-\n\ta = "<<d1.a<<"\n\tb = "<<d1.b<<std::endl<<std::endl;

    Demo d2(55,88);    // Immediately Constructor called after object creation
    std::cout<<"Object d2 :-\n\ta = "<<d2.a<<"\n\tb = "<<d2.b<<std::endl;

    /*
        Demo d3;    // Got error because we define our own anyone constructor. So compiler didn't take synthesize default constructor. 
        For validating Demo d3;  write default constructor explicitely as

        Demo()
        {
            // Keep it blank
        }
    */

    std::cout<<std::endl;
    return 0;
}