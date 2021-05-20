#include <iostream>
#include "D3.h"

int main()
{
    B1 ob1(1);
    cout << "\n\nB ob1(1)" << endl;
    cout << "sizeof(B) = " << sizeof(B1) << endl;
    cout << "Hierarchy of class B" << endl;
    ob1.show_B1();

    D1 ob2(2, 3);
    cout << "\n\nD1 ob2(2, 3)" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << "Hierarchy of class D1" << endl;
    ob2.show_D1();

    D2 ob3(4, 5,6);
    cout << "\n\nD2 ob3(4, 5,6)" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << "Hierarchy of class D2" << endl;
    ob3.show_D2();

    D3 ob4(7, 8, 9, 10, 11);
    cout << "\n\nD3 ob4(7, 8, 9, 10, 11)" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << "Hierarchy of class D3" << endl;
    ob4.show_D3();

    return 0;
}