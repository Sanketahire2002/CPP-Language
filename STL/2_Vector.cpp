#include<iostream>
#include<vector>

int main()
{
    std::cout<<"----------------------------------------------------------------"<<std::endl;

    std::vector<int> v1;
    std::cout<<"Capacity of Vector v1 = "<<v1.capacity()<<std::endl;
    std::cout<<"Size of Vector v1 = "<<v1.size()<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    std::vector<int> v2(10);
    std::cout<<"Capacity of Vector v2 = "<<v2.capacity()<<std::endl;
    std::cout<<"Size of Vector v2 = "<<v2.size()<<std::endl;
    std::cout<<"Vector v2 = ";
    for(int i=0;i<v2.size();i++)
        std::cout<<v2[i]<<"   ";
    std::cout<<std::endl;
    std::cout<<"----------------------------------------------------------------"<<std::endl;

    std::vector<int> v3(10,3);
    std::cout<<"Capacity of Vector v3 = "<<v3.capacity()<<std::endl;
    std::cout<<"Size of Vector v3 = "<<v3.size()<<std::endl;
    std::cout<<"Vector v3 = ";
    for(int i=0;i<v3.size();i++)
        std::cout<<v3.at(i)<<"   ";
    std::cout<<std::endl;
    std::cout<<"----------------------------------------------------------------"<<std::endl;

    std::vector<int> v4={10, 20, 30, 40, 50};
    std::cout<<"Capacity of Vector v4 = "<<v4.capacity()<<std::endl;
    std::cout<<"Size of Vector v4 = "<<v4.size()<<std::endl;
    std::cout<<"Vector v4 = ";
    for(int i=0;i<v4.size();i++)
        std::cout<<v4.at(i)<<"   ";
    std::cout<<std::endl;
    std::cout<<"----------------------------------------------------------------"<<std::endl;

    return 0;
}