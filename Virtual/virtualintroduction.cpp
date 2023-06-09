#include<iostream>
#include<cstring>
class Employee
{
    private:
    char name[20];
    int age;
    int id;
    float salary;
    public:
    Employee(const char* name="", int age=0 ,int id=0, float salary=0.0f)
    {
        strcpy(this->name,name);
        this->age=age;
        this->id=id;
        this->salary=salary;
    }

    void setname(char* name)
    {
        strcpy(this->name,name);
    }

    void setage(int age)
    {
        this->age=age;
    }

    void setid(int id)
    {
        this->id=id;   
    }

    void setsalary(float salary)
    {
        this->salary=salary;
    }

    char* getname()
    {
        return this->name;
    }


    int getage()
    {
        return this->age;
    }

    int getid()
    {
        return this->id;
    }

    float getsalary()
    {
        return this->salary;
    }

    virtual void display()
    {
        std::cout<<"Name : "<<this->name<<std::endl;
        std::cout<<"Age : "<<this->age<<std::endl;
        std::cout<<"ID : "<<this->id<<std::endl;
        std::cout<<"Salary : "<<this->salary<<std::endl;
    }
};

class Manager:public Employee       // Manager is a Employee
{
    private:
    int bonus;
    public:
    Manager(const char* name="", int age=0 ,int id=0, float salary=0.0f, int bonus=0) : Employee(name,age,id,salary)   // name,age,id,salary are private. Therefore can't initialise here. Therefore send them above to Employee constructor
    {
        this->bonus=bonus;
    }

    void setbonus(int bonus)
    {
        this->bonus=bonus;
    }

    int getbonus()
    {
        return this->bonus;
    }

    void display()
    {
        Employee::display();
        std::cout<<"Bonus : "<<this->bonus<<std::endl;
    }
};

class Salesman : public Employee
{
    private:
    int insentive;
    public:
    Salesman(const char* name="", int age=0 ,int id=0, float salary=0.0f, int insentive=0) : Employee(name,age,id,salary)   // name,age,id,salary are private. Therefore can't initialise here. Therefore send them above to Employee constructor
    {
        this->insentive=insentive;
    }

    void setbonus(int insentive)
    {
        this->insentive=insentive;
    }

    int getbonus()
    {
        return this->insentive;
    }

    void display()
    {
        Employee::display();
        std::cout<<"Insentive : "<<this->insentive<<std::endl;
    }
};

int main()
{
    Manager m1("Sanket",20,11,100000,20000);
    m1.display();
    std::cout<<"------------------------------------------------------"<<std::endl;

    Salesman s1("Ram",15,25,50000,1000);
    s1.display();
    std::cout<<"------------------------------------------------------"<<std::endl;
    std::cout<<"------------------------------------------------------"<<std::endl;
    std::cout<<"------------------------------------------------------"<<std::endl;

    Employee* arr[5];
    arr[0]=new Manager("Shyam",31,45,50000,1000);
    arr[1]=new Salesman("Rohit",88,99,18000,3000);
    arr[2]=new Employee("Tom",99,98,11000);
    arr[3]=new Manager("Jerry",19,20,7000,500);
    arr[4]=new Salesman("Sita",73,74,17000,300);

    for(int i=0;i<5;i++)
    {
        arr[i]->display();
        std::cout<<"------------------------------------------------------"<<std::endl;
    }

    return 0;
}