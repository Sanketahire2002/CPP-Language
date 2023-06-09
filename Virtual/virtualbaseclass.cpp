#include<iostream>

class Power
{
public:
    int pw;
    Power(int pw)
    {
        this->pw=pw;
        std::cout<<"this->pw = "<<this->pw<<std::endl;
    }
};

class Scanner :virtual public  Power
{
public:
    int sc;
    Scanner(int pw,int sc) : Power(pw)
    {
        this->sc=sc;
        std::cout<<"this->sc = "<<this->sc<<std::endl;
    }
};

class Printer : public virtual Power
{
public:
    int pr;
    Printer(int pw,int pr) : Power(pw)
    {
        this->pr=pr;
        std::cout<<"this->pr = "<<this->pr<<std::endl;
    }
};

class Xerox : public Scanner , public Printer
{
public:
    int xr;
    Xerox(int pw,int sc,int pr,int xr) : Power(pw) , Scanner(pw,sc) , Printer(pw,pr)
    {
        this->xr=xr;
        std::cout<<"this->xr = "<<this->xr<<std::endl;
    }
};

int main()
{
    Xerox x(1,2,3,4);
    return 0;
}