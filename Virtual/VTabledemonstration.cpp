#include<iostream>

class Parent
{
public:
    virtual void fun()
    {
        std::cout<<"Parent virtual fun()."<<std::endl;
    }
    virtual void gun()
    {
        std::cout<<"Parent virtual gun()."<<std::endl;
    }
};

class Child : public Parent
{
public:
    void fun()
    {
        std::cout<<"Child fun()."<<std::endl;
    }
};

int main()
{
    Child c;

    int* p = reinterpret_cast <int*> (&c);
    int* q = reinterpret_cast <int*> (*p);

    void (*fp)();

    fp = (void(*)())*q;
    fp();

    void (*fp1)();
    fp1 = (void(*)())*(q+1);
    fp1();

    return 0;
}