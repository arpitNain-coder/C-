#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    /*
    BINARY EXPONENTIATION ->
    The idea of binary exponentiation is as follows:

    When B is even: A^B = A^(B/2) × A^(B/2).
    When B is odd: A^B = A^(B/2) × A^(B/2) × A.
    (Assuming division is floored)
*/

/* 
FOR eg - 5 ^ 6 can be written as  5 ^ 3 * 5 ^ 3= (25) ^ 3 
now (25) ^ 3 can be written as => (25)^1 * (25)^1 * 25 because now b became odd
*/
    int a, b, c = 1;

    while(b) {
        if(b % 2) {
            c *= a;
        }
        b = b / 2;
        a *= a;
    }
}