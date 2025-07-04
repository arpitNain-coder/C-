#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
 {
    //Elementry Operations - An operation that takes constant time... example- Arithmetic ... 10^8 operations = 1 sec
    /*TIME COMPLEXITY~~ it is a function to describe the apporximate amount of operations an algorithm requires for the given input
     by this we can calculate approx execution time with it.
     Big-O notation -> it is function to calculate the time complexity for worst case scenario.
     
     Rules for O - 1) Should not have constants.. 2) Should not have constant factors
     3) Only include fastest growing function for each variable... 4) Can never be zero.
     */
    // for nested loops multiply the expected number of iterations of the loops 

    // TIME COMPLEXITY in loops - let no of iterations = N . Then time complexity = O(N).
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < m; j++) {                   

        }
    }  // this loop final time complexity will be O(n) * O(m) = O(n * m)

    for(int i = 1; i < n; i *= 2)
    {
        /*i = 1 * 2 * 2 * 2.... = n
        i = 2^k >= n (k is any integer)
        take log both sides.
        log 2^k >= log n
        k * log2 >= log n
        k = log n
        log n will be time complexity.
        */
    } 
    vector <int> v = {1, 2, 3, 4, 5};

    int c = 1;
    while(next_permutation(v.begin(), v.end()))
    { //O(d) * loop repeats for O(d!)... d is v.length().
        c++;
    }
    cout << c << '\n';
}