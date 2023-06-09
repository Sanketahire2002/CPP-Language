#include<iostream>

class Parent
{
public:
    Parent()
    {
        std::cout<<"Parent Constructor."<<std::endl;
    }

    virtual void fun()
    {
        std::cout<<"Parent Virtual fun()."<<std::endl;
    }

    void gun()
    {
        std::cout<<"Parent Non-Virtual gun()."<<std::endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        std::cout<<"Child Constructor."<<std::endl;
    }

    void fun()
    {
        std::cout<<"Child overrided Virtual fun()."<<std::endl;
    }
};

int main()
{
    Parent* p = new Child;
    p->fun();
    p->gun();

    return 0;
}