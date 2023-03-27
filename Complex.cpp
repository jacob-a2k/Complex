#include <iostream>

using namespace std;

class Complex {
	int real;
	int imagine;
public:
	Complex(int x, int y) :real(x), imagine(y) {}
};

int main()
{
	Complex one(2, 17);

	return 0;
}