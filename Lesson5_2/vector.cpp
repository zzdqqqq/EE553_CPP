//
//  main.cpp
//  Lesson5_2
//
//  Created by Zidong Zhang on 2/21/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    vector<int> a;
    a.reserve(10000);
    for (int i = 0; i < 10000; i++)
        a.push_back(i);
    
    vector<string> words;
    words.push_back("hello");
    words.push_back("goodbye");
    words.push_back("testing");
    
    for (int i = 0; i < words.size(); ++i)
        cout << words[i] << endl;
    cout << endl;
    
    for (vector<string>:: iterator i = words.begin(); i != words.end(); ++i)
        cout << *i << endl;
    cout << endl;
    
    
    for (auto x : words)
        cout << x << endl;
    cout << endl;
    
    return 0;
}
