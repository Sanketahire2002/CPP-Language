#include<iostream>
class demo
{
  public:
  int a;
  int b;
  demo(int a, int b)
  {
    this->a=a;
    this->b=b;
   }
demo& operator()()
{
    std::cout<<"function with none parameter"<<std::endl;
    std::cout<<"a:="<<a<<std::endl;
    std::cout<<"b:="<<b<<std::endl;
    return *this;
 }
  demo& operator()(int n)
 {
   std::cout<<"function with one parameter"<<std::endl;
    std::cout<<"n:="<<n<<std::endl;
    return *this;
  }
  demo& operator()(int n, int m)
 {
   std::cout<<"function with two parameter"<<std::endl;
    std::cout<<"n:="<<n<<"\nm="<<m<<std::endl;
    return *this;
  }
};
int main()
{
demo d(10,20);
d()(10)(500,1000);


return 0;
}