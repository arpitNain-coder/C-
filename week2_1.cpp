#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    /*
    Arrays - collection of multiple items of same data type
    */
    int a[3] = {2, 4, 6}; // it is an ARRAY same as that in C language

    //~~~~~VECTORS~~~~~~ - very similar to arrays but more convinient and has more functions, but are slower and take more memory then arrays
    vector<int> v(5, 1);
    v.push_back(2);             // will add '1' as the end element of vector.
    v.pop_back();               // will remove the last element from vector, in this case it will be 2
    cout << *v.begin() << '\n'; // & is referencing, * is dereferecing / will print first element of the vector.

    for (int i = 0; i < 5; i++)
    {                         // syntax of vector.
        cout << v[i] << '\n'; // output - will give 5 elements all with value 1 => 11111
    }

    // for each loop 
    for(int val: v) {
        cout << val;
    }

    // iteration ****
    // iterator **
    
    // set<int> s(v);

    v.erase(v.begin()); // will erase 0th index element from the vector.
    // v.begin() - points to first element of vector and ~~v.end( ) - refers to last null element... v.size()- stores the size of the vectors.

    // Multidimensional vectors - vector inside vectors.
    // n*m cells 
    vector<vector<int>> c;
    c.push_back({1, 2, 3});
    c.push_back({6, 8, 9});
    for (int i = 0; i < 2; i++)
    { // i= rows
        for (int j = 0; j < 3; j++)
        {                            // j= columns
            cout << c[i][j] << '\n'; // will print a multidimensional vector with 2 rows and 3 columns.
        }
    }
    
    // Multi Dimension Array/Vector can be represented as linear one.
    
    /*

    take input of 2d matrix using single loop (HW) - 

    2d matrix n*m = 
    general = 2 nested loops 
    task = 1 loop 

    1d => 0 based indexing 
    ith index means i+1 values are present till this index
    (i)th index means i values are present before this index

    for 2d in 1d -
    0 1 2 ... m-1
    m m+1 ..... 2m-1 
    ...
    n*(m-1) .... n*m-1

    so first row index range (0, m-1) total m
    first row in 2d [0,0] ... [0,m-1] {x,y}
    seems proportional

    2nd [m, 2m-1]
    [1,0] [1,m-1] {x,y}

    pattern x = constant row wize increase, y = cyclic + col wize inc

    x to ++ we need m values to be added means one row complete
    one row complete means index to be increased by m in 1d 
    0 => m means m elements added already so x ++ but how
    x = index in 1d / m => as soon m values added 1d index increase from previous starting point to +m (0 -> m, m -> 2m)/m ={0,1,2 .. n}

    for y being cyclic and changing on each value of index of 1d 
    i%m (0, m-1)
    (m, 2m-1) => (0, m-1)


    for (0, n*m-1) 
    {
        // u are taking input in 1d format
        // and putting it in 2d format

        // so u have to do some mapping of 1d to 2d 

        // linear 1d index = i 
        2d index [x, y] = 

        linear 1d = (generalized) = 0 1 2 .. m .... n*m-1 (index)

        2d matrix = (generalized)
        [0,0] [0,1] ..... [0,m-1]
        [1,0] ....
        ...
        [n-1,0] [n-1,1] .... [n-1,m-1]

        // let's think from 0 to m (index)
        // total m+1 elements 

        // why m elements ? (row size)

        [x,y] = [] goal 

        // first m elements - 1d [0, m-1] index range 
        [x = 0, y prop to index1d ] = something, i

        // second m elements - 1d [m, 2m-1] index range
        [x = 1, y prop to index1d ] = something, i
        observation = after m elements are inputed our x++
        x = index1d / m
        y = index1d % m

        so y value (0, m-1) is changing, 0 <= (any_val % m) < m

        x = (n*m-1) / m = n-1
        y = (n*m-1) % m = m-1
        
        // n*m-1 = (n-1)*m + (m-1)
        // n*m-1 = n*m - m + m - 1
        
    }

    [0,0] [0,1] [0,2]
    [1,0] [1,1] [1,2]
    [2,0] [2,1] [2,2]

    3*3 (multi dim matrix)= 9

    0, 1, 2, 3, 4, 5, 6, 7, 8 ( linear array )

          x, y
    0 => (0,0) => x*a + b*y
    1 => (0,1)
    2 => (0,2) 
                // 3 times y++

                // 1 time x++
    3 => (1,0)
    4 => (1,1)
    5 => (1,2)
                // 3 times y++

                // 1 time x++
    6 => (2,0)  
    7 => (2,1)
    8 => (2,2)


    index linear = equation of multi dim

    index = x*a + b*y
    0 = 0 + 0
    1 = something + 1 = 1
    2 = something + 2 = 2

    3 = 3*1 + something = 3

    so x is weighted here 3 times ( x*no_of_cols )

    // 2*4 = 6, n*m 
    [0,0]0 [0,1]1 [0,2]2 [0,3]3
    [1,0]4 [1,1]5 [1,2]6 [1,3]7

    first row = index 1d (0) = index of y in matrix 
    second row = index 1d (4) = index of x in matrix * m

    [index in 1d = x*no_of_cols + y]
    2d to 1d  


    // gpt = some interesting concepts of matrix that can help me solve problems.
    
    */
   // rotation end me 
   
}