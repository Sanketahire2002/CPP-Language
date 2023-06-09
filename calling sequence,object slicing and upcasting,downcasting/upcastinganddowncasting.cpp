#include<iostream>

class A
{
public:
    int a;
    A()
    {
        a=10;
    }
};

class B
{
public:
    int b;
    B()
    {
        b=20;
    }
};

class C
{
public:
    int c;
    C()
    {
        c=30;
    }
};

class D :public A,public B,public C
{
public:
    int d;
    D()
    {
        d=40;
    }
};

int main()
{
    D obj;
    A* aptr=&obj;
    B* bptr=&obj;
    C* cptr=&obj;

    std::cout<<"Address of Obj = "<<&obj<<std::endl;
    std::cout<<"Value of aptr = "<<aptr<<std::endl;
    std::cout<<"Value of bptr = "<<bptr<<std::endl;
    std::cout<<"Value of cptr = "<<cptr<<std::endl;

    std::cout<<aptr->a<<std::endl;
    std::cout<<bptr->b<<std::endl;
    std::cout<<cptr->c<<std::endl;
    /*
    std::cout<<aptr->b<std::endl;
    std::cout<<aptr->c<<std::endl;
    std::cout<<bptr->a<<std::endl;
    std::cout<<bptr->c<<std::endl;
    std::cout<<cptr->a<<std::endl;
    std::cout<<cptr->b<<std::endl;
    */

    D* dptr=&obj;

    std::cout<<dptr->a<<std::endl;
    std::cout<<dptr->b<<std::endl;
    std::cout<<dptr->c<<std::endl;
    std::cout<<dptr->d<<std::endl;

    D* d2= static_cast<D*>(cptr);
    std::cout<<"Value of d2 = "<<d2<<std::endl;
    D* d3= static_cast<D*>(bptr);
    std::cout<<"Value of d3 = "<<d3<<std::endl;
    D* d4= static_cast<D*>(aptr);
    std::cout<<"Value of d4 = "<<d4<<std::endl;

    std::cout<<d2->a<<std::endl;
    std::cout<<d2->b<<std::endl;
    std::cout<<d2->c<<std::endl;
    std::cout<<d2->d<<std::endl;
    // same for d3 and d4
    return 0;
}