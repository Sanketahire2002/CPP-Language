#include<iostream>
class demo
{
    public:
    int* arr;
    int size;
    demo(int size)
    {
        this->size=size;  
    }

    int& operator[](int index)
    {

        if(index<0 || index>(this->size))
        {
            std::cout<<"Can't proceed further"<<std::endl;
        }
        else
        {
            arr=(int*)malloc(this->size*sizeof(int));
            return this->arr[index];
        }
    }
};
int main()
{

demo d(5);
d[2]=500;        //d.operator[](2)=100;
 
std::cout<<"The value at the specified position is "<<d.arr[2];
return 0;
}