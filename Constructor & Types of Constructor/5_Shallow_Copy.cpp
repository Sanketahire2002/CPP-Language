// Synthesize Copy Constructor
// Problem of Shallow Copy

#include<iostream>
class Demo
{
    public:

    int a;
    int b;
    int* ptr;

    Demo(int a,int b)
    {
        this->a=a;
        ptr=(int*)malloc(sizeof(int));
        *(this->ptr)=b;
    }

    // Here we call our own parameterized constructor. So compiler didn't take implicitely Synthesize Default Constructor. It will take our user defined constructor.

};

int main()
{
    std::cout<<"\n\n**************** Problem of Shallow Copy **************************\n"<<std::endl;
    
    Demo d1(10,20);
    std::cout<<"Before Change :- Object d1 :-\n\ta = "<<d1.a<<"\n\tptr = "<<*(d1.ptr)<<std::endl<<std::endl;

    Demo d2(d1); 
    // We didn't write explicit copy constructor. So automatically compiler take implicitely synthesized copy constructor and it copy all data members as member by member as it is.
    std::cout<<"Before Change :- Object d2 :-\n\ta = "<<d2.a<<"\n\tptr = "<<*(d2.ptr)<<std::endl<<std::endl;

    (d1.a)++;
    (*(d1.ptr))++;  
    std::cout<<"After Change :- Object d1 :-\n\ta = "<<d1.a<<"\n\tptr = "<<*(d1.ptr)<<std::endl<<std::endl;
    std::cout<<"After Change :- Object d2 :-\n\ta = "<<d2.a<<"\n\tptr = "<<*(d2.ptr)<<std::endl<<std::endl;
    // ptr pointing to same memory location in d1 and d2 both.

    return 0;
}