#include <iostream>
#include <random>
#include <cmath>
using namespace std;

const double phi = (1 + sqrt(5))/2;

int goldenMeanSearch(int x[], int n) {
    int L = 0, R = n-1;
    int S = (R-L) / phi;
    int x = R - S, y = L + S;
    
    if (data[x] > data[y]) {
        R = y;
        y = x;
        s = (R-L) / phi;
        x = R - S
    } else{
        L = x;
        x = y;
        s = (R-L) / phi;
        y = L - S;
    }
}
