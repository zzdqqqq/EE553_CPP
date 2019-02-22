//
//  main.cpp
//  Lesson5_3
//
//  Created by Zidong Zhang on 2/21/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>

class Body
{
private:
    
public:
};

class Solarsystem
{
private:
    vector<Body> bodies;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    SolarSystem s("solarsystem.dat");
    cout << s; // print out each body with name, mass, etc...
    return 0;
}
