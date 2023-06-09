#include<iostream>
#include<algorithm>

int main()
{
    int arr[] = {5, 3, 8, 9, 1};

    std::sort(arr,arr+5);
    for(int i=0;i<5;i++)
        std::cout<<arr[i]<<"   ";
    
    std::cout<<std::endl;
    if(std::binary_search(arr,arr+5,3))
        std::cout<<"3 is present in array.";
    else
        std::cout<<"3 is NOT present in array.";
    
    if(std::binary_search(arr,arr+5,15))
        std::cout<<"\n15 is present in array.";
    else
        std::cout<<"\n15 is NOT present in array.";

    return 0;
}