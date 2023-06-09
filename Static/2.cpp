#include<iostream>
class Demo
{
	public:
	int a;
	static int b;

    void fun()
    {
        std::cout<<this->a<<std::endl<<this->b<<std::endl<<std::endl;
    }

    static void gun()
    {
        std::cout<<std::endl<<b<<std::endl<<std::endl;
    }

};
int Demo :: b=100;
int main()
{
	Demo  d;
	d.fun();
    d.gun();
	return 0;
}