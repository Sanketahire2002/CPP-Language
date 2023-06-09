// Synthesize Copy Constructor

#include<iostream>
class Demo
{
    public:

    int a;
    int b;
    int* ptr;

    Demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        ptr=(int*)malloc(sizeof(int));
        *(this->ptr)=c;
    }

    // Here we call our own parameterized constructor. So compiler didn't take implicitely Synthesize Default Constructor. It will take our user defined constructor.

};

int main()
{
    std::cout<<"\n\n************ Synthesize Copy Constructor ***********************\n"<<std::endl;
    
    Demo d1(10,20,30);
    std::cout<<"Object d1 :-\n\ta = "<<d1.a<<"\n\tb = "<<d1.b<<"\n\tptr = "<<*(d1.ptr)<<std::endl<<std::endl;

    Demo d2(d1); 
    // We didn't write explicit copy constructor. So automatically compiler take implicitely synthesized copy constructor and it copy all data members as member by member as it is
    std::cout<<"Object d2 :-\n\ta = "<<d2.a<<"\n\tb = "<<d2.b<<"\n\tptr = "<<*(d2.ptr)<<std::endl<<std::endl;

    return 0;
}