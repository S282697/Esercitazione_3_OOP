#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

struct ComplexNumber{
    double real;
    double immaginary;


    ComplexNumber();
    ComplexNumber(double re, double imm);

    ComplexNumber coniugate();
};




std::ostream &operator << (std::ostream& os, const ComplexNumber& r);
ComplexNumber operator + (const ComplexNumber& z1, const ComplexNumber& z2);
bool operator ==(const ComplexNumber& z1, const ComplexNumber& z2);








#endif
