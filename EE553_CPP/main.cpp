//
//  main.cpp
//  EE553_CPP
//
//  Created by Zidong Zhang on 1/1/19.
//  Copyright © 2019 张子洞. All rights reserved.
//

#include <iostream>
#include "session2.h"
#include "session3.h"
using namespace std;

// declare function first
void session1();
void session2();
void session3();
// main function
int main() {
    session1();
    session2();
    session3();
    return 0;
}
// define own function
void session1(){
    cout << "hello world" << endl;
    cout << 2000 * 2000 << '\n';
    cout << 2000000L * 2000000 << '\n';
//    cout << 2000000L * 2000000L << '\n';
//    cout << 2000000LL * 2000000 << '\n'; // type promotion
}
