#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f1(double x) { return x*x -2; } // +/- sqrt(2)

typedef double (*FuncOneVar)(double x);

double bisection(FuncOneVar f, double a, double b, double eps) {
    long double ya = f(a);
    long double yb = f(b);
    if (ya * yb > 0)
        throw "Function does not appear to cross zero\n";
    
    long double mid = (a + b) / 2;
    long double y = f(mid);
    if (y>0)
        b = mid;
    else if (y<0){
        a = mid;
    }
    return mid;
}

int main()
{
    cout << setprecision(30);
    cout << bisection(f1, 0, 3, .01) << endl;
    cout << bisection(f1, 0, 3, .0001) << endl;
    cout << bisection(f1, 0, 3, .000001) << endl;
}
