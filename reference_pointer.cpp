#include <iostream> 
using namespace std;
void swap1(int &,int &);

void swap2(int *,int *);

int main()
{
	int a,b;
	cout << "Enter two numbers :\n";
	cin >> a >>b;
	swap1(a,b);

	swap2(&a,&b);

	return 0;
}


void swap1(int &x,int &y)
{
	int t;
	t = x;
	x = y;
	y = t;
	cout << "\nSwap Using referance variable :" << x;
	cout << "\nSwap Using referance variable :" << y;
}


void swap2(int *ptr1,int *ptr2)
{
	int t;
	t = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = t;
	cout << "\nSwap Using pointer :" << *ptr1;
	cout << "\nSwap Using pointer :" << *ptr2 ;
}