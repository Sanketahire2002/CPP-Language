#include<iostream>

template<typename T>
T fun(T a)
{
    std::cout<<"a = "<<a<<std::endl;
}

template<class T=int>
T default_template(T a)
{
    std::cout<<"a = "<<a<<std::endl;
}

template<typename T1, typename T2>
void gun(T1 a,T2 b)
{
    std::cout<<"a = "<<a<<"\tb = "<<b<<std::endl;
}

template<typename T> void run(T a ,int b)
{
    std::cout<<"a = "<<a<<"\tb = "<<b<<std::endl;
}

template<typename T> void sun(int a ,T b)
{
    std::cout<<"a = "<<a<<"\tb = "<<b<<std::endl;
}

template<class T1, class T2> void hello(T1 a)
{
    T2 b='Y';
    std::cout<<"a = "<<a<<"\tb = "<<b<<std::endl;
}

template<class T>
T student()
{
    return 5;
}

template<class T>
T teacher()
{
    return 'A';
}

int main()
{
    int x;
    char y;

    fun<int>(10);
    fun<float>(1.2f);
    fun<char>('A');

    std::cout<<"----------------------------------------------------"<<std::endl;

    default_template('A');
    default_template(100);
    default_template(3.2);

    std::cout<<"----------------------------------------------------"<<std::endl;

    gun<int,char>(10,'A');
    gun<float,float>(1.2f,3.0f);
    gun<char,double>('A',11.2);

    std::cout<<"----------------------------------------------------"<<std::endl;

    run<char>('Z',50);
    sun<char>(100,'X');

    std::cout<<"----------------------------------------------------"<<std::endl;

    hello<int,char>(5);

    std::cout<<"----------------------------------------------------"<<std::endl;

    x=student<int>();
    y=teacher<char>();
    std::cout<<"x = "<<x<<std::endl;
    std::cout<<"y = "<<y<<std::endl;

    std::cout<<"----------------------------------------------------"<<std::endl;

    return 0;
}