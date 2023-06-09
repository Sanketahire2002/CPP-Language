// Synthesize Default Constructor
#include<iostream>
class Demo
{
    public:

    int a;
    int b;

    /*

        // Here we didn't call any constructor. So compiler will take implicitely Synthesize Default Constructor as below :-

        Demo()
        {

        }

    */
};

int main()
{
    std::cout<<"\n\n************************ Synthesize Default Constructor *******************************\n"<<std::endl;
    Demo d;    // Immediately Constructor called after object creation

    std::cout<<"a = "<<d.a<<"\nb = "<<d.b<<std::endl;

    std::cout<<std::endl;
    return 0;
}