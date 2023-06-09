#include<iostream>
#include<vector>
#include<array>

int main()
{
    std::vector<int> v = {10,20,30,40,50};
    std::vector<int>::iterator i = v.begin();
    
    std::cout<<"Vector : ";
    for(int j=0; j < v.size() ;j++)
        std::cout<<*(i+j)<<"    ";
    std::cout<<std::endl;
    std::cout<<"Vector : ";
    i = v.begin();
    std::cout<<*i<<"    ";
    i++;
    std::cout<<*i<<"    ";
    i=next(i);
    std::cout<<*i<<"    ";
    std::cout<<std::endl;

    std::array<int,10> arr = {10,20,30,40,50};
    std::array<int,10>::iterator k = arr.begin();
    std::cout<<"Array : ";
    for(int j=0; j < arr.size() ;j++)
        std::cout<<*(k+j)<<"    ";
    std::cout<<std::endl;

    return 0;
}