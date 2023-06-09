#include<iostream>
#include<vector>

int main()
{
    std::cout<<"----------------------------------------------------------------"<<std::endl;

    std::vector<int> v;
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;
    
    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    v.push_back(10);
    std::cout<<"Capacity of Vector v = "<<v.capacity()<<std::endl;
    std::cout<<"Size of Vector v = "<<v.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    std::vector<int> vec;
    std::cout<<"Capacity of Vector vec = "<<vec.capacity()<<std::endl;
    std::cout<<"Size of Vector vec = "<<vec.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    std::cout<<"Element\t    Capacity\t    Size"<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
    for(int i=0;i<1000;i++)
    {
        vec.push_back(10);
        std::cout<<"   "<<i+1<<"           "<<vec.capacity()<<"            "<<vec.size()<<std::endl;
    }

    return 0;
}