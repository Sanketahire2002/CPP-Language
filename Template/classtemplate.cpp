#include<iostream>

template<typename T>
class Demo
{
public:

    static T a;

    static void fun()
    {
        std::cout<<"a = "<<a<<std::endl;
    }

    T gun(T x)
    {
        return x;
    }
};

int Demo<int>::a;   // give memory to a     // This type is same for all objects of diffretent type also

int main()
{
    Demo<int>::a = 20;  // using a give value to a
    Demo<int>::fun();

    Demo<int> d;    // object creation
    d.fun();

    std::cout<<d.gun(20)<<std::endl;    // object d is of int type. So we send int type value

    return 0;
}