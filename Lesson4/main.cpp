#include <iostream>
#include "Fraction.hh"
using namespace std;

//ostream& operator << (ostream& out, Fraction a) {
//    out << a.num << "/" << a.den << endl;
//    return out;
//}

int main()
{
    const Fraction a(1, 2); // 1/2
    Fraction b(3);  // 3/1
    Fraction c; // 0/1
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}


