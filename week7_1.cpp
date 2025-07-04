#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    <----STL----> It is standard template library (STL) a set of C++ functions/ classes to do various tasks.
    */

    /*
    1) _____PAIR____-> Pairs are very useful when dealing with two related values. For example, storing a range [L, R].
                       Pairs have inbuilt comparators such as <, >, etc.
    This is how we take input for pair ->
    */

    pair<int, int> a;
    cin >> a.first >> a.second;

    // This is how we output a pair ->

    pair<int, int> p = {1, 7};
    cout << p.first << endl; // outputs 1 
    cout << p.second << endl; // outputs 7

    /*
    2) _____Useful STL for VECTOR_____ -> we have covered some of it first like - v.begin, v.end, v.push_back, v.erase.
    Useful Vector STL ->
    a) v.rbegin, v.rend ===> in this function basically we find v.begin, v.end of reveresed vector v. Eg - v = {1, 2 ,3 , 4} here v.begin = 1 
       and v.end = null but v.rbegin = 4 and v.rend = null.
    b) v.empty ===> it will output 1 or 0 based on if vector is empty or not.
    c) v.insert ===> in this you can insert element in between the array. For eg - v = {1, 2, 3, 5} & we do v.insert(v.begin() + 1, 4)
       then v will become {1, 4, 2, 3, 5}.
    d) v.erase ===> it can also be used as -> v.erase(find(v.begin, v.end, int n)) then it will find number n in v and then erase it.
    */

    vector<int> v = {1, 2, 3, 5};
    cout << *v.rbegin() << " " << *v.rend() << '\n';
    cout << v.empty();

    v.insert(v.begin() + 3, 4); // new v = {1, 2, 3, 4, 5}
}