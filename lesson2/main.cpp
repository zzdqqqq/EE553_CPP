// 下次quiz ： loops operation basis


#include <iostream>
#include <cmath>
using namespace std;


void f(int x) {
    cout << x;
    x += 5;
}

void g(int& x) {
    cout << x;
    x += 5;
}

//int main() {
//    int a = 3;
//    f(a); // 3
//    f(a); // 3 parameters are passed by VALUE (copy)
//    f(4); // notice, 4 does not change!!!
//    g(a); // 3 but now a = 8
//    g(a); // 8 now a = 13
//    g(12);


int main()
{
//    int a = 1000*1000;
//    cout << a << endl;
//    int b = 15 / 2 * 2;
//    cout << b << endl;
//    int c = 3 % 3 * 3;
//    int d = 2 + 3 * 4;
//    int e = 15 / (2*2);
//    uint16_t f = 65534 + 2;
//    cout << c << ' ' << d << ' ' << e << ' ' << f << endl;
    
    double x = 3 + 1 / 2;
    double xx = 3 + 1.0 / 2;
    double y = x * 1.5;  // type promotion!!
    int z = y * 3;
    int w = round(y*3);
    cout << x << ' ' << xx << ' ' << y << ' ' << z << ' ' << w << endl;
    double d1 = sin(0);
    double d2 = cos(0);
    double d3 = tan(0);
    double d4 = sqrt(2);
    double d5 = atan(0);
    cout << d1 << ' ' << d2 << ' ' << d3 << ' ' << d4 << ' ' << d5 << endl;
    
    int a = 3;
    f(a); // 3
    f(a); // 3 parameters are passed by VALUE (copy)
    f(4); // notice, 4 does not change!!!
    g(a); // 3 but now a = 8
    g(a); // 8 now a = 13
//    g(12);
}
