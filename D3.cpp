#include "D3.h"

D3::D3(int d3 = 0, int d1 = 0, int d2 = 0, int b1 = 0, int b2 = 0) : D1(d1, b1), D2(d2, b1,b2) { this->d3 = d3; }
D3::~D3() {}

void D3::show_D3()
{
	cout << "Class D3" << endl;
	show_D1();
	show_D2();
	cout << "show_D3()" << endl;
	cout << "D3::d3 = " << d3 << endl;
}
