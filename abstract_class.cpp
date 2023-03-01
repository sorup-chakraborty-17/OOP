#include<iostream>
using namespace std;
class shape{};
class triangle:public shape
{
	int l,h;
	public:
		triangle(int a,int b)
		{
			l=a;h=b;
		}
		void area()
		{
			cout<<"Area of triangle:- "<<(l*h)/2<<endl;
		}
};
class rectangle:public shape{
	int l,b;
	public:
		rectangle(int a,int x)
		{
			l=a; b=x;
		}
		void area()
		{
			cout<<"Area of rectangle:- "<<(l*b)<<endl;
		}
};
class circle:public shape{
	int r;
	public:
		circle(int s)
		{
			r=s;
		}
		void area()
		{
			cout<<"Area of circle:- "<<(22*r*r)/7<<endl;
		}
};
int main()
{
	circle  c(7);
	rectangle r(4,5);
	triangle t(5,5);
	c.area();
	t.area();
	r.area();
}
