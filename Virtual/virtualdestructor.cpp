#include<iostream>

class Parent
{
public:
    int* p;
    Parent()
    {
        p=new int;
        std::cout<<"Parent Constructor."<<std::endl;
    }

    virtual ~Parent()
    { 
        delete p;
        std::cout<<"Parent Destructor."<<std::endl;
    }
};

class Child : public Parent
{
public:
    int* q;
    Child()
    {
        q=new int;
        std::cout<<"Child Constructor."<<std::endl;
    }
    ~Child()
    {
        delete q;
        std::cout<<"Child Destructor."<<std::endl;
    }
};

int main()
{
    Parent* ptr = new Child;
    
    delete ptr;

    return 0;
}