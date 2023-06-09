#include<iostream>

template<typename T> void bubblesort(T arr[],int n)
{
    int i,j;
    T temp;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[5];
    char brr[5];
    float crr[5];

    for(int i=0;i<5;i++)
        std::cin>>arr[i];
    
    for(int i=0;i<5;i++)
        std::cin>>brr[i];
    
    for(int i=0;i<5;i++)
        std::cin>>crr[i];

    bubblesort<int>(arr,5);
    bubblesort<char>(brr,5);
    bubblesort<float>(crr,5);
    
    for(int i=0;i<5;i++)
        std::cout<<arr[i]<<"\t";
    std::cout<<"\n";
    
    for(int i=0;i<5;i++)
        std::cout<<brr[i]<<"\t";
    std::cout<<"\n";

    for(int i=0;i<5;i++)
        std::cout<<crr[i]<<"\t";

    return 0;
}