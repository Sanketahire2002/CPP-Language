// Reference Variable
#include<iostream>
int main()
{
    int a=10;
    int& b=a;
    std::cout<<"a = "<<a<<"\nb = "<<b<<std::endl<<std::endl;

    b=20;
    std::cout<<"After Change :-\n\ta = "<<a<<"\n\tb = "<<b<<std::endl<<std::endl;

    /*
        b just refering a. It will not got its seperate space. It is Alies name or Nickname.
        b and a both are refering to same memory location with both names as a and b
        so both can access and change the data in that memory
    */

    // Similarly we can make more nicknames

    int &c=a;
    std::cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<std::endl<<std::endl;
    return 0;
}