// Copy Constructor
// Deep Copy

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

    Demo(const Demo& other)
    {
        this->a=other.a;
        ptr=(int*)malloc(sizeof(int));
        *(this->ptr) = *(other.ptr);
    }
    // Here we call our own parameterized constructor. So compiler didn't take implicitely Synthesize Default Constructor. It will take our user defined constructor.

};

int main()
{
    std::cout<<"\n\n**************** Copy Constructor **************************"<<std::endl;
    std::cout<<"******************** Deep Copy *****************************\n"<<std::endl;
    
    Demo d1(10,20);
    std::cout<<"Before Change :- Object d1 :-\n\ta = "<<d1.a<<"\n\tptr = "<<*(d1.ptr)<<std::endl<<std::endl;

    Demo d2(d1); 
    // We wrote our own explicit copy constructor. So compiler will not take its synthesized copy constructor
    std::cout<<"Before Change :- Object d2 :-\n\ta = "<<d2.a<<"\n\tptr = "<<*(d2.ptr)<<std::endl<<std::endl;

    (d1.a)++;
    (*(d1.ptr))++;  
    std::cout<<"After Change :- Object d1 :-\n\ta = "<<d1.a<<"\n\tptr = "<<*(d1.ptr)<<std::endl<<std::endl;
    std::cout<<"After Change :- Object d2 :-\n\ta = "<<d2.a<<"\n\tptr = "<<*(d2.ptr)<<std::endl<<std::endl;
    // ptr pointing to same memory location in d1 and d2 both if explicit contructor NOT written
    // ptr pointing to different memory location in d1 and d2 if explicit contructor written

    return 0;
}