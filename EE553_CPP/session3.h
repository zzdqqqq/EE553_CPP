//
//  Header.h
//  EE553_CPP
//
//  Created by Zidong Zhang on 1/1/19.
//  Copyright © 2019 张子洞. All rights reserved.
//

#ifndef session3_h
#define session3_h
#include <iomanip>
using namespace std;
void session3(){
    float f = 1.234567;
    double d = 1.234567890123456;
    long double e = 1.23456789012345678901234567890;
    cout << setprecision(30);
    
    cout << "f = " << f << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
}

#endif /* Header_h */
