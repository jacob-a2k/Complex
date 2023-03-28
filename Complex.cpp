#include <iostream>

using namespace std;

class Complex {
	int real;
	int imagine;
public:
	Complex(int r, int i) :real(r), imagine(i) {}
	Complex();
	Complex(const Complex& source);
	Complex add(const Complex& source) const;
	Complex subtract(const Complex& source) const;
	Complex multiply(const Complex& source) const;
	//void operator=(const Complex& source);
	void display()const;
};
Complex::Complex(const Complex& source) {
	this->real = source.real;
	this->imagine = source.imagine;
}
Complex Complex::add(const Complex& source)const {
	return Complex(this->real + source.real, this->imagine + source.imagine);
}
Complex Complex::subtract(const Complex& source) const {
	return Complex(this->real - source.real, this->imagine - source.imagine);
}
Complex Complex::multiply(const Complex& source) const {
	return	Complex(this->real * source.real + this->imagine * source.imagine * (-1), this->real * source.imagine + this->imagine * source.real);
}
/*
void Complex::operator=(const Complex& source) {
	this->real = source.real;
	this->imagine = source.imagine;
}*/
void Complex::display() const {		// for testing
	cout << this->real << "," << this->imagine <<"i" << endl;
}

int main()
{
	Complex one(6, -2);
	Complex four(3, 4);
	Complex two(one);
	Complex result = one.add(two);
	result = one.subtract(two);
	result = one.multiply(four);
	result.display();

	return 0;
}