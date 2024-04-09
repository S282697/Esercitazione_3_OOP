#include "ComplexNumber.hpp"
#include <iostream>


ComplexNumber::ComplexNumber(){
    real = 0;
    immaginary = 0;

}


ComplexNumber::ComplexNumber(double re, double imm){
    real = re;
    immaginary = imm;
}

// z2.coniugate()
ComplexNumber ComplexNumber::coniugate(){
    ComplexNumber z(real, -immaginary);
    return z;
}

std::ostream &operator <<(std::ostream &os, const ComplexNumber &z){
    os << z.real;
    if (z.immaginary < 0)
        os << z.immaginary;

    else
        os << "+" << z.immaginary;

    os << "i";
    return os;
}

ComplexNumber operator +(const ComplexNumber &z1, const ComplexNumber &z2){
    double r = z1.real + z2.real;
    double i = z1.immaginary + z2.immaginary;

    ComplexNumber z(r,i);
    return z;

}

bool operator ==(const ComplexNumber &z1, const ComplexNumber &z2){
    bool real = ( z1.real == z2.real);
    bool imm = ( z1.immaginary == z2.immaginary);

    return real && imm;
}
