//WAP in C++ which will display how memory is allocated and deallocated dynamically
//using new and delete operator.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int *arr;
    int size;
    cout << "Enter the size of the integer array";
    cin >> size;

    cout << "Creating an array of size" << size;

    arr = new int[size];

    cout << "Dynamic Memory Allocation Successful";

    delete arr;
    return 0;
}