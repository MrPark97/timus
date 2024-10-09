#include <bits/stdc++.h>
using namespace std;

 long long icbrt( long long x) {
    long long s; 
    long long y, b;

    s = 60;
    y = 0;
    while(s >= 0) {        // Do 11 times. 
        y = 2*y; 
        b = (3*y*(y | 1) | 1) << s; 
        s = s - 3; 
        if (x >= b) {
            x = x - b;
            y = y | 1; 
        } 
    } 
   return y; 
}

long long isqrt(long long x) {
    long long m, y, b, t;
    m = 288230376151711744;
    y = 0;
    while(m != 0) { // Do 16 times.
        b = y | m;
        y = y >> 1;
        t = (long long)(x | ~(x - b)) >> 31; // -1 if x >= b, else 0.
        x = x - (b & t);
        y = y | (m & t);
        m = m >> 2;
    }
    return y;
}

int main() {
    long long c;
    cin >> c;
    long long tryv, d, v=1LL;
    long long qbrt = icbrt(c);
    for(long long i=1LL; i<=qbrt; i++) {
        if(c % i == 0LL) {
            d = c/i;
            tryv = isqrt(d);
            
            if(tryv*tryv == d) {
                v = tryv;
                break;
            }

            if(d % i == 0LL)
                v = i;
        }
    }
    cout << ((v>>1) + 1LL);
    return 0;
}
