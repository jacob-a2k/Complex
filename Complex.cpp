#include <iostream>
#include <cmath>

using namespace std;

class Complex {
	float real;
	float imagine;
public:
	Complex(float r = 0, float i = 0) :real(r), imagine(i) {}
	Complex(const Complex& source);
	Complex add(const Complex& source) const;
	Complex subtract(const Complex& source) const;
	Complex multiply(const Complex& source) const;
	Complex divide(const Complex& source)const ;
	Complex& operator=(const Complex& source);
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
Complex Complex::divide(const Complex& source)const  {
	float divisor = pow(source.real,2) + pow(source.imagine,2);
	return Complex((this->real * source.real + this->imagine * source.imagine)/divisor, (this->real * source.imagine * (-1) + this->imagine * source.real)/divisor);
}
Complex& Complex::operator=(const Complex& source) {
	cout << "Overload execute" << endl; // just to test it works
	this->real = source.real;
	this->imagine = source.imagine;
	return *this;
}
void Complex::display() const {
	cout << this->real << "," << this->imagine <<"i" << endl;
}

int main()
{
	Complex one(6, -2);
	Complex four(3, 4);
	Complex two(one);
	Complex result; // = one.multiply(four);
	//result = one.subtract(two);
	//result = one.multiply(four);
	//result = one.divide(four);
	result = four;
	result.display();

	return 0;
}