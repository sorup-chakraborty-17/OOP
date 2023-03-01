#include<iostream>  //3
using namespace std;
class mark1
{
    int x;
    public : 
       mark1(int i)
       {
        x = i;
        cout <<"x initialized.";
       }
       void show_x(void)
       {
           cout <<"X   :  "<<x<<endl;

       }
};

class mark2
{
    float y; 
    public:
        mark2(float j)
        {
            y = j;
            cout<<"Y initialized.";
        }
        void show_y(void)
        {
            cout<<"Y   :  "<<y<<endl;
        }
};

class derived : public mark1,public mark2
{
    int m,n;
    public:
        derived(int a,float b,int c,int d) : mark1(a),mark2(b)
        {
            m = c;
            n = d;
            cout <<"derived initialized"<<endl;

        }
        void show_mn(void)
        {
            cout<<"M   :  "<<m<<endl<<"N   :  "<<n<<endl;

        }
};


int main()
{
    derived g(80,8.7,88,89);
    cout <<endl;
    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}