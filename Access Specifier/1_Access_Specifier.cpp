#include<iostream>

class Parent
{
    private:
    int a;
    public:
    int b;
    protected:
    int c;
};

class Child:Parent
{
    private:
    int x;
};

class Other
{
    int x;
};

class Other2
{
    
};

class Other3
{
    Parent p;
};

int main()
{
    Parent p;
    std::cout<<"Size of Parent class : "<<sizeof(p)<<std::endl;
    // Size of parent class is 12 bytes

    Child c;
    std::cout<<"Size of Child class : "<<sizeof(c)<<std::endl;
    //size of child class = Total size of parent class + Total size of child class = 12 bytes of parent + 4 bytes of childv = 16 bytes+++

    Other o;
    std::cout<<"Size of Other class : "<<sizeof(o)<<std::endl;
    // Only one int present. So size is 4 bytes

    Other2 o2;
    std::cout<<"Size of Other2 class : "<<sizeof(o2)<<std::endl;
    // Object of Parent class created. So size is 12 bytes

    Other3 o3;
    std::cout<<"Size of Other3 class : "<<sizeof(o3)<<std::endl;
    return 0;
}