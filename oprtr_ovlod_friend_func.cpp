#include <iostream>
using namespace std;
class Friend_func
{
    int a = 10;
    int b = 20;
    int c = 30;

public:
    void get_data()
    {
        cout << "Values of A,B & C\n";
        cout << a << endl << b << endl << c << endl;
    }
    void show()
    {
        cout << a << endl << b << endl << c << endl;
    }
    void friend operator-(Friend_func &x);
};
void operator-(Friend_func &x)
{
    x.a = -x.a;
    x.b = -x.b;
    x.c = -x.c;
}
int main()
{
    Friend_func x1;
    x1.get_data();
    cout << "Before overloading" << endl;
    x1.show();
    cout << "After overloading" << endl;
    -x1;
    x1.show();
    return 0;
}