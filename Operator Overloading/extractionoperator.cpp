#include<iostream>
class Demo
{
    int a;
    int b;
    int c;
    public:

    Demo() {}

    Demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
   
    friend std::istream& operator>>(std::istream&, Demo&);
    friend std::ostream& operator<<(std::ostream&,const Demo&);
};
std::istream& operator>>(std::istream& in, Demo& other)
{
    std::cout<<"Enter a = ";
    in>>other.a;
    std::cout<<"Enter b = ";
    in>>other.b;
    std::cout<<"Enter c = ";
    in>>other.c;
    return in;
}

std::ostream& operator<<(std::ostream& out,const Demo& other)
{
    out<<"a = "<<other.a<<std::endl;
    out<<"b = "<<other.b<<std::endl;
    out<<"c = "<<other.c<<std::endl;
    return out;
}

int main()
{
    Demo d1;
    // Scan all values from user using function and then print them
    std::cin>>d1;
    std::cout<<"Values of a,b,c are :"<<std::endl;
    std::cout<<d1;
    return 0;
}