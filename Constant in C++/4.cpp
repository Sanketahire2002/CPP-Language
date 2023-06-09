//  Constant Member Function

#include<iostream>
class Demo
{
    public:
    const int a;
    Demo(int x):a(x)
    {

    }
    void display()
    {
        std::cout<<"Constant a = "<<this->a<<std::endl;
    }
    void change()
    {
        this->a=20;
    }

};

int main()
{
    Demo d(10);
    d.display();
    d.change();
    d.display();
    return 0;
}