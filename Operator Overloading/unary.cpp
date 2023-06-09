#include<iostream>
class Demo
{
    public:
    int a,b,c;
    Demo():a(10),b(-20),c(30) {}

    Demo& operator-()
    {
        this->a=-(this->a);
        this->b=-(this->b);
        this->c=-(this->c);
    }
};

int main()
{
    Demo d;
    std::cout<<"Before Change d :\na = "<<d.a<<std::endl<<"b = "<<d.b<<std::endl<<"c = "<<d.c<<std::endl;
    -d;
    std::cout<<"After Change d :\na = "<<d.a<<std::endl<<"b = "<<d.b<<std::endl<<"c = "<<d.c<<std::endl;
    return 0;
}