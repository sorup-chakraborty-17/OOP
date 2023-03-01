//Write a program in C++ which will overload input > and output < operator.

#include <iostream>
using namespace std;
class date
{
    int dd,mm, yy;
public:
    friend istream &operator>>(istream &input, date & x)

    {
        input >> x.dd >> x.mm >> x.yy;
        return input;
    }
    friend ostream &operator<<(ostream &output, date & x)

    {
        output << x.dd << " " << x.mm << " " << x.yy;
        return output;
    }
};
int main()
{
    date c;
    cout << "Enter the date"<<endl;
    cin >> c;
    cout << "Date :" << endl << c;
    return 0;
}