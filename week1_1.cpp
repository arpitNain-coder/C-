#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Variables - variables stores data like- integers, characters, bool.
    // Data Types - same as in C . Eg=> int, double , float , long long , long double, char etc.

    // Type Casting -
    int number = 'a';       // output will be ASCII value of a which is 97.
    char ch = 98;           // output will be a character as per ASCII value of 98 which is b.
    cout << number << '\n'; // output is given with "cout"(CHARACTER OUTPUT) function and input is taken from "cin >>__"(CHARACTER INPUT) function

    /*
    OPERATORS - same as in C.
    Arithmetic => +, -, *, /, % .... Relational => ==, >, < , >= , <= , !=..... Logical => && , || , !....ch
    Bitwise Operators =>   & , | , ~ , ^ these are just logic gates - and , or , not , xor.

    NOTE- Bitwise & vs logical && :
    For eg - 2&3 => 2 because it does bitwise AND operation
             2&&3 => This will lead to 1(true) because it checks if both conditions are true or not and we know only 0 means false.
    negative number => true

    && => it is a circuit breaking operator because it will stop if 1st condition is false.
    */
    int d = 2 & 3;
    cout << d << '\n'; // take 2 and 3 in binary format and perform &(and) function 010 & 011.
    d = 2 && 3;
    cout << d << '\n';
    
    /*
    if else statements are same as they were in C
     */
    if (2 > 1)
    {
        cout << "YES\n";
    }

    /*
    Loops - same loops from C.
       while(condition){
       }

       for(exp 1; exp 2 ; exp 3){
       }

       do{
            it will execute at least once before seeing while condition.

       }while( );
    */

    // Left and Right shift of binary numbers eg-
    int n = 2;
    n << 1; // will left shift all bits by one 010 => 100 or we can say it multiplies by 2 ....
    // n >> 1 will right shift all bits by one or we can say  divide by 2.
    cout << n << '\n';


    // homework - every type conversion
    // eg - (char) int

    // implicit and explicit conversion 
    // or say ( automatic vs manually means by coding)
    // important as improper type conversion can lead to data loss

    int i = INT_MAX; // if ques ask long value or more than >1e9 = 1e10
    long j = i+1; // what is expected ?
    // 
    cout << j << endl; // overflow 
    
    // long = int + int = int 
    // long = long + int = long
    j = i + 1L + 0L;
    j = (long) i + 1;
    cout << j <<endl;
    
    double d = 4;
    cout << d << endl; // implicit
    d -= 3; // 3 = 3.0
    cout << d << endl; // implicit
    
    int integer = 4.4; // implicit
    integer -= 2.4; // 4-2.4 = 1.6 = int(1.6)
    cout << integer << endl; 
    // int + float => float, int 

    // explicit - 
    // c - style cast
    char c = 'a';
    int a = (int) c; // Converts char 'a' (ASCII 97) to int 97
    char d = (char) 45; // Converts int 45 to char '-' (ASCII 45)
    double x = 3.14;
    int y = (int) x; // Converts double 3.14 to int 3 (truncates decimal)
}