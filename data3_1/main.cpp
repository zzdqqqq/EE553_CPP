#include <iostream>
using namespace std;

uint64_t powermod(uint64_t a, uint64_t n, uint64_t m) {
    uint64_t prod = 1; // a^49  49 = 32 + 16 + 1 = 110001;
    while (n > 0) {
        if (n % 2 != 0)
            prod = prod * a % m;
        a = a*a%m;
        n = n/2;
    }
    return prod;
}

bool Fermat (uint64_t a,uint64_t p, int k) {
    for (int i = 0; i < 6; i++) {
        uint64_t = a = rand % 2 + p-1;
        cout << "testing a = " << a << "p=" << p << endl;
    }
    if (powermod(a, p-1, p) != 1) {
            return false;
    }
    return true;
}

bool MillerRabin (uint64_t p, int k) {
    for (int != 0; i < k; i++){
        uint_64 a = randaon(2, p-2);
        uint64_t d = p-1;
        uint64_t s = 0;
        while (d&2 == 0) {
            d >>= 1;
        }
        uint64_t x = powermode(a, d, p);
        uint64_t x = powermod(a, d, p);
        if (x == 1|| x == p-1)
            continue;// this  one is good , try until
        
        for (int j = 1; j < s; )
    }
}

int main()
{
    cout << Fermat(17, 3) << endl;
}
