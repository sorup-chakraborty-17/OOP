#include <iostream>

using namespace std;

class Binary {
public:

	int feet, inch;

	Binary()
	{
		this->feet = 0;
		this->inch = 0;
	}

	Binary(int f, int i)
	{
		this->feet = f;
		this->inch = i;
	}

	friend Binary operator-(Binary&, Binary&);
};

Binary operator-(Binary& d1, Binary& d2) {
	Binary d3;

	d3.feet = d1.feet - d2.feet;
	d3.inch = d1.inch - d2.inch;

	return d3;
}

int main()
{
	Binary d1(70, 20);

	Binary d2(30, 15);

	Binary d3;

	d3 = d1 - d2;

	cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch;
	return 0;
}
