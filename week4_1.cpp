#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    //~~~PREFIX SUMS~~~ -> A prefix sum stores the sum of prefix of an array at each index .It takes O(N) time complexity to compute.
    /*prefix[k] = sum of array from index 0 to index k */
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int p[n];
    p[0] = a[0];

    for (int i = 1; i < n; i++) {    
        p[i] = p[i-1] + a[i];
    }
    // To find sum of a range in an array like -> sum from a[2] to a[4].
    int q; 
    cin >> q;
    while(q--)
    {
        int l, r; 
        cin >> l >> r;
        if(l == 0)
        {
            cout << p[r] << '\n';
        }else 
        {
            cout << p[r] - p[l - 1] << '\n';
        }
    }
}