//
//  session1.h
//  EE553_CPP
//
//  Created by Zidong Zhang on 1/5/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#ifndef session1_h
#define session1_h
using namespace std;
void func1(){
    cout << "Function1" << endl;
    cout << "hello world" << endl;
    cout << 2000 * 2000 << '\n';
    cout << 2000000L * 2000000 << '\n';
    //    cout << 2000000L * 2000000L << '\n';
    //    cout << 2000000LL * 2000000 << '\n'; // type promotion
}
void func2(){
    cout << "Function2" << endl;
    int a = 1;
    int b = 123456789;
    int c = -123456789;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    
    //    short int x;
    //    int y;
    //    long int z;
    //    long long int w;
    
    //    int32_t aa = 1;
    //    int64_t bb = 1231231231231231;
    //    uint32_t cc = -1;
    //    uint64_t dd = 0;
    
    //    const int Z = 99;
    //    Z = 48;
}
void func3(){
    cout << "Function3" << endl;
    float f = 1.234567;
    double d = 1.234567890123456;
    long double e = 1.23456789012345678901234567890;
    cout << setprecision(30);
    
    cout << "f = " << f << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
}
void func4(){
    
}
#endif /* session1_h */
