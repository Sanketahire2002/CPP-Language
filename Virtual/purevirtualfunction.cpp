#include<iostream>

class Parent
{
public:
	virtual void fun() = 0; // Pure Virtal Function
};

class Child : public Parent
{
public:
	void fun()
    { 
        std::cout << "fun() called from child"; 
    }
};

int main()
{
	Child d;
	d.fun();
    // Parent P;    //  Give Error as Parent class contain minimum one pure virtual function. So now it is Abstract Class. It's Object can't be created.
	return 0;
}
