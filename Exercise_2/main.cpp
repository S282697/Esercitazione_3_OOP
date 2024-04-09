#include "ComplexNumber.hpp"
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

    ComplexNumber z1(1,2);
    cout << z1.coniugate() << endl ;

    ComplexNumber z2(1,-2);
    cout << "z1 + z2 = " << z1+z2 << endl;

    ComplexNumber z3(1,2);

    cout << boolalpha;
    cout << "z1 = z2 ? : " << (z1==z2) << endl;
    cout << "z1 = z3 ? : " << (z1==z3) << endl;


    return 0;
}
