#include<iostream>
class Demo
{
	public:

    int b;


  
    void gun()
    {
        // int b;
        std::cout<<this->b<<std::endl;
        b=999;
        std::cout<<this->b<<std::endl;
        this->b=54;
        std::cout<<this->b<<std::endl;

    }

};
int main()
{
    Demo d;
    d.b=100;
    d.gun();
    
    
	return 0;
}