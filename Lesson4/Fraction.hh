////
////  Fraction.hh
////  EE553_CPP
////
////  Created by Zidong Zhang on 2/14/19.
////  Copyright © 2019 Zidong Zhang. All rights reserved.
////
//
//#ifndef Fraction_h
//#define Fraction_h
//
//
//#endif /* Fraction_h */
#include <iostream>
using namespace std;
class Fraction
{
private:
    int num, den;
public:
    Fraction (int n, int d); 
    Fraction (int n);
    Fraction ();
    friend Fraction operator + (Fraction, Fraction);
    // for member operator, this points to first operand
    friend Fraction operator + (Fraction a, Fraction b);
    friend ostream& operator << (ostream& out, Fraction a);
    
    
};

Fraction::Fraction(int n, int d) : num(n), den(d) {}
Fraction::Fraction(int n) : num(n), den(1) {}
Fraction::Fraction() : num(0), den(1) {}
Fraction operator + (Fraction a, Fraction b) {
    return Fraction(a.num*b.den + a.den*b.num, a.den*b.den);
}
ostream& operator << (ostream& out, Fraction a) {
    out << a.num << "/" << a.den << endl;
    return out;
}
