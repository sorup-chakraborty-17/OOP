#include <iostream>
#include <stdlib.h>

using namespace std;
class student
{
    string name;
    int age;

public:
    student()
    {
        cout << "Constructor is called\n";
    }
    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
    void *operator new(size_t size)
    {
        cout << "Overloading new operator " << endl;
        void *ptr = ::operator new(size);

        return ptr;
    }

    void operator delete(void *ptr)
    {
        cout << "Overloading delete operator " << endl;
        free(ptr);
    }
};

int main()
{
    student *ptr = new student("Sorup", 21);

    ptr->display();
    delete ptr;
    return 0;
}
