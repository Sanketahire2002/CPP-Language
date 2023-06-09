#include<iostream>
class Demo
{
    int a;
    int b;
    int c;
    public:
    Demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    friend std::ostream& operator<<(std::ostream&,const Demo&);
};
std::ostream& operator<<(std::ostream& out,const Demo& other)
{
    out<<other.a<<std::endl;
    out<<other.b<<std::endl;
    out<<other.c<<std::endl;
    return out;
}
int main()
{
    Demo d1(10,20,30);
    // print all values using function
    std::cout<<d1;
    return 0;
}