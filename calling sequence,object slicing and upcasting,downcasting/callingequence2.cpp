#include<iostream>
#include<string>
class Person
{
    int age;

    public:
    Person(int age=0)
    {
        this->age=age;
    }
    void display()
    {
        std::cout<<"Age= "<<this->age<<std::endl;
    }
};

class Employee : public Person
{
    int id;
    double salary;

    public:
    Employee(int age=0,int id=0,double salary=0.0) : Person(age)
    {
        this->id=id;
        this->salary=salary;
    }
    void display()
    {
        Person::display();
        std::cout<<"ID= "<<this->id<<std::endl;
        std::cout<<"Salary= "<<this->salary<<std::endl;
    }
};

int main()
{
    Employee E(20,11,30000.0);
    E.display();
    return 0;
}
