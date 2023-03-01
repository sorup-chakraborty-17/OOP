#include <iostream>
using namespace std;
class M
{
public:
    void display()
    {
        cout << "Class M\n";
    }
};
class N
{
public:
    void display()
    {
        cout << "Class N\n";
    }
};
class P : public M, public N
{
public:
    void display()
    {
        M ::display();
        N ::display();
    }
};
int main()
{
    class P p;
    p.display();
    return 0;
}
