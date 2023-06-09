#include<iostream>
#include<vector>

class Demo
{
public:
    int a,b,c;

    Demo()
    {
        std::cout<<"\tDefault Constructor"<<std::endl;
    }

    Demo(int a,int b,int c):a(a),b(b),c(c)
    {
        std::cout<<"\tParameterized Constructor"<<std::endl;
    }

    Demo(const Demo& other)
    {
        std::cout<<"\tCopy Constructor"<<std::endl;
    }

};

int main()
{
    std::cout<<"--------------------------------------------------------------------------"<<std::endl;

    std::vector<class Demo> v;
    // std::vector<Demo> v;

    for(int i=0;i<20;i++)
    {
        std::cout<<"Object : "<<i+1<<std::endl;
        v.push_back({10,20,30});
        std::cout<<"-------------------------------------------------"<<std::endl;
    }

    std::cout<<"**********************************************************************"<<std::endl;
    std::cout<<"**********************************************************************"<<std::endl;
    std::cout<<"**********************************************************************"<<std::endl;

    std::vector<class Demo> v2;
    v2.reserve(10);

    for(int i=0;i<41;i++)
    {
        std::cout<<"Object : "<<i+1<<std::endl;
        v2.push_back({10,20,30});
        std::cout<<"-------------------------------------------------"<<std::endl;
    }

    std::cout<<"**********************************************************************"<<std::endl;
    std::cout<<"**********************************************************************"<<std::endl;
    std::cout<<"**********************************************************************"<<std::endl;

    std::vector<class Demo> v3;
    v3.reserve(10);

    for(int i=0;i<41;i++)
    {
        std::cout<<"Object : "<<i+1<<std::endl;
        v3.emplace_back(10,20,30);
        std::cout<<"-------------------------------------------------"<<std::endl;
    }

    std::cout<<"**********************************************************************"<<std::endl;
    std::cout<<"**********************************************************************"<<std::endl;
    std::cout<<"**********************************************************************"<<std::endl;

    std::cout<<v.max_size()<<std::endl;
    std::cout<<v2.max_size()<<std::endl;
    std::cout<<v3.max_size()<<std::endl;

    return 0;
}