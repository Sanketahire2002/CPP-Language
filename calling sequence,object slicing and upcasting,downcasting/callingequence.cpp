#include<iostream>

class Person
{
    char name[20];
    int age;

    public:
    Person()
    {
        std::cout<<"Person Constructor";
    }
};

class Employee : public Person
{
    int id;
    double salary;

    public:
    Employee()
    {
        std::cout<<"\nEmployee Constructor";
    }
};

int main()
{
    Employee E1;
    return 0;
}
