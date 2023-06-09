// Copy Constructor         Demo d2;
//                          d2 = d1;

#include<iostream>
class Demo
{
    public:

    int a;
    int* ptr;

    Demo() {}
    // We must call default constructor explicitely because we write minimum one constructor in our class so compiler won't take its synthesized default constructor
    // no need to give values

    Demo(int a,int b)
    {
        this->a=a;
        ptr=(int*)malloc(sizeof(int));
        *(this->ptr)=b;
    }

    void operator=(const Demo& other)
    {
        this->a=other.a;
        ptr=(int*)malloc(sizeof(int));
        *(this->ptr) = *(other.ptr);
    }

    /*
        There is no relation between any copy constructor and operator= function
        means d2=d1; will not related to synthesized copy constructor or copy constructor
    */
};

int main()
{
    std::cout<<"\n\n**************** Operator Overloading **************************"<<std::endl;
    std::cout<<"Demo d2;\nd2 = d1;\n*****************************\n"<<std::endl;
    
    Demo d1(10,20);
    std::cout<<"Before Change :- Object d1 :-\n\ta = "<<d1.a<<"\n\tptr = "<<*(d1.ptr)<<std::endl<<std::endl;

    Demo d2; // We must call default constructor explicitely because we write minimum one constructor in our class so compiler won't take its synthesized default constructor
    /* 
        So write as 
                Demo() {}
        No need to give values
    */
    d2=d1;
    /*
        d2=d1; taken as implicit function like
        d2.operator=(d1);
        It gives shallow  copy
        So for deep copy write our own definition with same function name operator=
        It is called Operator Overloading
    */
    std::cout<<"Before Change :- Object d2 :-\n\ta = "<<d2.a<<"\n\tptr = "<<*(d2.ptr)<<std::endl<<std::endl;

    (d1.a)++;
    (*(d1.ptr))++;  
    std::cout<<"After Change :- Object d1 :-\n\ta = "<<d1.a<<"\n\tptr = "<<*(d1.ptr)<<std::endl<<std::endl;
    std::cout<<"After Change :- Object d2 :-\n\ta = "<<d2.a<<"\n\tptr = "<<*(d2.ptr)<<std::endl<<std::endl;
    // ptr pointing to same memory location in d1 and d2 both if explicit contructor NOT written
    // ptr pointing to different memory location in d1 and d2 if explicit contructor written

    /*
        Here   d2 = d1;   take implicit function operator= and acts as   d2.operator=(d1); function
        It will give shallow copy if explicit operator= function NOT written
        It will give Deep copy if explicit operator= function written
    */
    
    return 0;
}