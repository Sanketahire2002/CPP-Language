#include<iostream>

class Demo
{
public:
    int a;
    int b;

    void fun()
    {

    }

    static void gun()
    {

    }

    virtual void run()
    {

    }

};

int main()
{
    Demo d;
    std::cout<<"Size of object of class Demo : "<<sizeof(d)<<std::endl;
    return 0;
}