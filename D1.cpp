#include "D1.h"

D1::D1(int d1 = 0, int b1 = 0) : B1(b1) { this->d1 = d1; }
D1::~D1() {}

void D1::show_D1()
{
	cout << "Class D1" << endl;
	show_B1();
	cout << "show_D1()" << endl;
	cout << "D1::d1 = " << d1 << endl;
}