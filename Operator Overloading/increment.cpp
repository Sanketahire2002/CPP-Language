#include<iostream>
class Demo
{
    public:
    int a,b,c;
    Demo() {}

    Demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }

    Demo& operator++()
    {
        (this->a)++;
        (this->b)++;
        (this->c)++;
        return *this;
    }

    Demo& operator++(int)
    {
        Demo* obj=(Demo*)malloc(sizeof(Demo));
        obj->a=this->a;
        obj->b=this->b;
        obj->c=this->c;

        (this->a)++;
        (this->b)++;
        (this->c)++;
        return *obj;
    }
};

int main()
{
    Demo d1(10,20,30),d2(10,20,30);
    Demo d3;
    std::cout<<"Before Change d1 :\na = "<<d1.a<<std::endl<<"b = "<<d1.b<<std::endl<<"c = "<<d1.c<<std::endl;
    ++d1;
    std::cout<<"After Change d1 :\na = "<<d1.a<<std::endl<<"b = "<<d1.b<<std::endl<<"c = "<<d1.c<<std::endl;
    std::cout<<".........................................."<<std::endl;
    std::cout<<"Before Change d2 :\na = "<<d2.a<<std::endl<<"b = "<<d2.b<<std::endl<<"c = "<<d2.c<<std::endl;
    std::cout<<"Before Change d3 :\na = "<<d3.a<<std::endl<<"b = "<<d3.b<<std::endl<<"c = "<<d3.c<<std::endl;
    d3=d2++;
    std::cout<<"After Change d2 :\na = "<<d2.a<<std::endl<<"b = "<<d2.b<<std::endl<<"c = "<<d2.c<<std::endl;
    std::cout<<"After Change d3 :\na = "<<d3.a<<std::endl<<"b = "<<d3.b<<std::endl<<"c = "<<d3.c<<std::endl;

    return 0;
}