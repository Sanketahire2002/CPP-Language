#include<iostream>

int main()
{
    const int a=10;
    std::cout<<"a = "<<a<<std::endl;

    int* p=const_cast<int*>(&a);

    std::cout<<"After Change using Pointer :-"<<std::endl;
    (*p)++;

    std::cout<<"a = "<<a<<"\n*p = "<<*p<<std::endl;


    return 0;
}