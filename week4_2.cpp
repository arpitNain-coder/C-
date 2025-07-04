#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Funciton to search target integer from the vector.
bool search(vector<int> a, int target)
{
    int left = 0, right = a.size() - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == target)
        {
            return true;
        }
        if (a[mid] < target)
        {
            left = mid + 1;
        }
        if (a[mid] > target)
            right = mid - 1;
    }
    return false;
}

/*
---To Find Last Index Of Target---
For eg -> Vector => 1, 1, 2, 2, 2, 3, 3
then here last index of 2 is four.

Implementation->  */

int search1(vector<int> a, int target)
{
    int left = 0, right = a.size() - 1;
    while (left < right)
    {
        int mid = (left + right + 1) / 2;
        if (a[mid] <= target)
            left = mid;
        if (a[mid] > target)
            right = mid - 1;
    }
    return (a[left] == target) ? left : -1;
}

int main()
{
    /* ----BINARY SEARCH---- > It is searching algorithm for sorted collection of data.
    --> It divides the search by half each iteration.
    --> Time Complexity -> O(log n)
    --> Takes 20 iterations to search 10^6 elements.
    */
  


    /*---PREDICATE FUNCTION---
    pred(v) -> v <= t -> true if we need to remove left.
                      -> false if we need to remove right.
    for eg -> 1 1 2 2 2 3 3 and our target is 2
    pred(v) =>T T T T T F F
     */



    int l = 1, n, r = n + 1; // min is 0 and l = -1 , max is size of array so r = a.size( ) + 1  where a.size() = n
    // This search has l and r as exclusive and we only search in (l + 1, r - 1)
    while (r - l > 1)
    {
        int m = (l + r) / 2;
        if (predicate(m))
            l = m;
        else
            r = m;
    }
    // l is last true
    // r is first false
}