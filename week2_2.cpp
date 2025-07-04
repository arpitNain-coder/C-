#include <bits/stdc++.h>
#include <vector>
using namespace std;

string hello(string s1)
{
    return s1 + "hi";
}

int main()
{
    //~~~Strings~~~ kinda vector of characters.
    string s = "123"; // it is a string containing 123 in form of some characters as they are in "".
    s.push_back('7'); // now s = 1237 as it added 7 to it.
    // s+=7 will also do the same work as s.push_back did.
    string b = "abcdef";
    cout << s.substr(1, 4) << '\n'; // will print s[1] to s[4]  => bcde

    //~~~~Functions~~~~  are defined before and can be called when needed .
    cout << hello("XYZ ") << '\n'; // output for this will be XYZ hi as the function (hello) was already defined above.

    // ~~~~Useful  functions for vectors & strings~~~~

    // 1) Sort --> sort out vector in ascending order.
    vector<int> x = {4, 3, 7, 5, 8};
    sort(x.begin(), x.end()); // sorts the vector from start to end
    // for each loop
    for (auto i : x)
    {                     // auto i figures out the type of vector  and i:x means for each element i in  container x.
        cout << i << " "; // will print the sorted vector => 3 4 5 7 8
    }
    // 2) Reverse --> reverses the entire vector.
    reverse(x.begin(), x.end()); // will reverse the vector  so x => 8 5 7 3 4 (if not sorted first).

    // 3) min_element --> find the min element in array or vector.
    cout << *min_element(x.begin(), x.end()) << '\n'; // will find min element in vector x which is 3 and output it.
    // in arrays - cout << *min_element(a, a+5); for array of 5 elements .

    // 4) max_element --> same as min element but finds the max element.
    cout << *max_element(x.begin(), x.end()) << '\n'; // output --> 8

    // 5) to_string --> converts number to string.
    string g = to_string(123); // g is now 123.
    string f = "abcd123";
    for (auto i: f) {
        cout << i - 'a' << " " << i - '0' << endl;   
    }
}