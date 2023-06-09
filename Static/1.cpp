
#include<iostream>
class Demo
{
	public:
	int a;
	static int b;
};
int Demo :: b=100;
int main()
{
	Demo  d1,d2,d3;
	d1.a=10;
	d2.a=20;
	d3.a=30;

	std::cout<<std::endl<<std::endl;
	std::cout<<"Initially value of a in d1 , d2 , d3 objects is : "<<std::endl;
	std::cout<<d1.a<<std::endl;
	std::cout<<d2.a<<std::endl;
	std::cout<<d3.a<<std::endl;

	std::cout<<std::endl<<std::endl;
	std::cout<<"Initially value of b in d1 , d2 , d3 objects is : "<<std::endl;
	std::cout<<d1.b<<std::endl;
	std::cout<<d2.b<<std::endl;
	std::cout<<d3.b<<std::endl;


	std::cout<<std::endl<<std::endl;
	std::cout<<"Change a only in d1 : "<<std::endl;
	(d1.a)++;
	std::cout<<d1.a<<std::endl;
	std::cout<<d2.a<<std::endl;
	std::cout<<d3.a<<std::endl;

	std::cout<<std::endl<<std::endl;
	std::cout<<"change b in d1 : "<<std::endl;
	(d1.b)++;
	std::cout<<d1.b<<std::endl;
	std::cout<<d2.b<<std::endl;
	std::cout<<d3.b<<std::endl;

	return 0;
}