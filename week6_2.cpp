#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    LEAST COMMON MULTIPLE (LCM) -> it is easy to find you only gcd for it
    LCM(A, B) = (A * B) / GCD(A, B)*/

    // for eg -> LCM of 9, 12 is 

    int a, b;
    a = 9;
    b = 12;

    int lcm1 = (a * b) / (__gcd(a, b));
    cout << lcm1 << " " ;

    /*
    PROPERTIES OF GCD AND LCM ->
    1) GCD (A, B) can be represented as product of min(p ^ q1, p ^ q2) where p ^ q1 and q2 are prime factors of A and B.
    2)LCM (A, B) can be represented as product of max(p ^ q1, p ^ q2) where p ^ q1 and q2 are prime factors of A and B.
    3) GCD(A, B, C, ...)   is same as GCD(GCD(GCD(A, B), C),...) same for LCM.
    */
}