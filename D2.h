#pragma once
#include "B1.h"
#include "B2.h"
class D2 :protected B1,public B2
{
private:
	int d2;
public:
	D2(int, int,int);
	~D2();

	void show_D2();
};

