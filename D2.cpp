#include "D2.h"

D2::D2(int d2 = 0, int b1 = 0,int b2=0) : B1(b1), B2(b2) { this->d2 = d2; }
D2::~D2() {}

void D2::show_D2()
{
	cout << "Class D2" << endl;
	show_B1();
	show_B2();
	cout << "show_D2()" << endl;
	cout << "D2::d2 = " << d2 << endl;
}
