// 01
#include <iostream>
using namespace std;
class digits
{
    int t;

public:
    digits()
    {
        t = 0;
    }
    digits(int n)
    {
        t = n;
    }
    void operator-()
    {
        t = -t;
    }
    void show()
    {
        cout << "\nt= " << t;
    }
};
int main()
{
    class digits k(70);
    k.show();
    -k;
    k.show();
    return 0;
}