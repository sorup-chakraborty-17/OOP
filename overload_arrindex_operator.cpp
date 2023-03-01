//Write a program in C++ which will overload [] operator.

#include<iostream>
using namespace std;
class arr
{
    private:
        int array[5];
    public:
        arr();
        void get_data();
        void show_data();
        int& operator[](int i);
};

arr:: arr()
{  
    for(int i=0;i<5;i++)
        array[i] = 0;
}

void arr:: get_data()
{
    cout<<"\n Enter the Array elements:(5) "; 
    for(int i=0;i<5;i++)
        cin>>array[i];
}

void arr :: show_data()
{ 
    cout<<"\n The Array is: ";
    for(int i=0;i<5;i++)
        cout<<" "<<array[i];
}

int& arr::operator[](int i)
{
    return array[i]; 
}

int main()
{
    arr n; 
    n.get_data(); 
    n.show_data();
    cout<<"\n Modified array Elements Are: ";
    for (int i=0;i<5;i++)
    cout<<" "<<n[i] * 2;
    return 0;
}