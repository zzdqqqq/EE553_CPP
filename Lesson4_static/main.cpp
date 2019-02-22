//
//  main.cpp
//  Lesson3_static
//
//  Created by Zidong Zhang on 2/14/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

class Zebra {
private:
    string name;
    static int count; // shared by the class!!!!!!!!!!不能有初始值！！！！
public:
    Zebra (const string& name) : name(name) {
        count ++;
        cout << "Hello" << name << endl;
    }
    
    const string& getName() const {
        return name;
    }
    
    ~Zebra() {
        count --;
        cout << " i am dying" << count << endl;
    }
    static int getCount() {
        return count;
    }
};

int Zebra::count = 0;// if count is private, why can count = 0?
//string Zebra::name = "zzz"; //Non-static data member defined out-of-line

void f() {
    cout << Zebra::getCount() << endl;
    Zebra a("Fred");
    Zebra b("Alice");
    cout << Zebra::getCount() << endl;
}

int main()
{
    f();
    f();
    cout << "done" << endl;
}
