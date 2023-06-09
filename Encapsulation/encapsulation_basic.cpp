#include<iostream>
class Demo
{
    private:
    int age;
    
    public:

    void setAge(int age)
    {
        if(age>0)
            this->age=age;
        else
        std::cout<<"Invalid Age."<<std::endl;
    }
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Demo d;
    d.setAge(20);
    std::cout<<"Age of Students : "<<d.getAge();
    return 0;
}