#include<iostream>

class Demo
{
    private:
    int a;
    int b;
    int c;

    public:
    Demo()
    {
        a=10;
        b=20;
        c=30;
    }
    void display()
    {
        std::cout<<std::endl<<"a = "<<a<<"\t"<<"b = "<<b<<"\t"<<"c = "<<c<<std::endl;
    }
};

int main()
{
    Demo d;
    d.display();
    int* p=reinterpret_cast<int*>(&d);

    (*p)++;
    (*(p+1))++;
    (*(p+2))++;

    d.display();
    std::cout<<std::endl;
    return 0;
}