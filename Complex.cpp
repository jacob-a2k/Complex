#include <iostream>

using namespace std;

class Complex {
	int real;
	int imagine;
public:
	Complex(int r, int i) :real(r), imagine(i) {}
	Complex(Complex& source);
};
Complex::Complex(Complex& source) {
	real = source.real;
	imagine = source.imagine;
}

int main()
{
	Complex one(2, 17);
	Complex two(one);

	return 0;
}