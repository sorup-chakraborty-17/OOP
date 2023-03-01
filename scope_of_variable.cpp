//WAP” in C++ which will demonstrate the lifecycle and scope of a variable. Also show
//the usage of:: (scope resolution) operator.

#include <iostream>
using namespace std;
int m = 10;
int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout << "\n k is :  " << k;
        cout << "\n m is :  " << m;
        cout << "\n :: m is : " << ::m;
    }
        cout << "\n m is :  " << m;
        cout << "\n :: m is : " << ::m;
     return 0;
}