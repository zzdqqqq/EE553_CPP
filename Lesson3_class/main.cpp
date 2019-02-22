// class   object
// A class is a kind of object
// An object is an instance of a class
// When we create an instance of a class we are instantiating the class

// methods are functions inside an object
// methos are functions that only work on an object
//
// message is a call to an object method

// in c++ method = message (you cannot call a method that does not exist,
// your program will not build)
//


// in c++, all declarations end in a semicolon
#include <iostream>
using namespace std;

class Fraction{
private:
    int num, den;//numerator, denometor 顺序不一样？？？有什么区别吗
public:
//    Fractioin(int n, int d) {
//        num = n;
//        den = d;
//    }
    Fraction(int n, int d) : num(n), den(d) {}
    
    
    
    void print() const {// can not be change
        cout << num << '/' << den << endl;
    }
//    friend Fraction operator +(Fraction x, Fraction y);

    friend Fraction operator +(Fraction x, Fraction y)
    {
        return Fraction(x.num*y.den+y.num*x.den, x.den * y.den);
    }
    
};// there is a semicolon!!!!!!!!!!!!!!!!!


int main(){
    
//     all objects must have a unique identity
//    Fraction f1;
//    cout << sizeof(f1) << endl;
//    cout << sizeof(Fractioin) << endl;
    const Fraction a(1,2);
    Fraction b(1,3);
    Fraction c = a + b;
    a.print();
    b.print();
    c.print();
}


