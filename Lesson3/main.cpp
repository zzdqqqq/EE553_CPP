//
//  main.cpp
//  Lesson3
//
//  Created by Zidong Zhang on 2/7/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
//    for (uint32_t i = 10; i >= 0; i--){
//        cout << i << ' ';//unsign always > 0;so infinite loop
//    }
    int a[10] = {4};
    cout << a[3] << endl;
    
    const char s[5] = "abdc";// ASCII NUL \0
    cout << s << endl;
    
    cout <<sizeof(s) << '\n';
    cout << sizeof(a) << '\n';
    
    return 0;
}
