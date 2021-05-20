#pragma once
#include "D1.h"
#include "D2.h"
class D3 :protected D2, public D1
{
private:
	int d3;
public:
	D3(int, int, int,int,int);
	~D3();

	void show_D3();
};

