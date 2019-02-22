//
//  main.cpp
//  Lesson5_4
//
//  Created by Zidong Zhang on 2/21/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Body
{
private:
    string name;
    double mass;
    Vec3d pos;
    Vec3d vel;
    Vec3d a;
    static const double G;
public:
    Body(const string& name, double mass, Vec3d pos, Vec3d vel)
    : name(name), mass(mass), vel(vel), pos(pos) {}
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    return 0;
}

const double Body::G = 6.67e-11;


/* homework
 
 vector<body> bodies
 
