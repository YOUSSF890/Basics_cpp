#include <iomanip>
#include <iostream>
#include <limits.h>

/*
    Primitive Data Types
    --Modifiers 
    ----Modify The Length of Data ==> See Limits

    ------Signed [int , char]
    --------Store Positive , Negative Integers And 0
    --------int Is signed by Default

    -----Unsigned [int , char]
    -------Store positve only

    -----Short [int]
    -------can Be Short Instead of Short int

    -----Long [int , double]
    -------Store Maximum value
    -------can Be long Instead of long int
    --Type Alias
    ----using identifier = type
    ----typedef unsigned long UL;

*/

int main()
{
    int age = 300;
    std :: cout << sizeof(age) << std :: endl; // 4 Byte

    short int num_age = 98;
    std :: cout << sizeof(num_age) << std :: endl; // 2 Byte

    short new_age = 98;
    std :: cout << sizeof(new_age) << std :: endl; // 2 Byte


    std :: cout << sizeof(short int) << std :: endl; // 2
    std :: cout << sizeof(short) << std :: endl; // 2
    std :: cout << sizeof(long int) << std :: endl; // 8
    std :: cout << sizeof(long) << std :: endl; // 8
    std :: cout << sizeof(long long int) << std :: endl; // 8
    std :: cout << sizeof(long long) << std :: endl; // 8

    signed num_one = 100;
    std :: cout << num_one << std :: endl; // 100

    signed num_tow = 0;
    std :: cout << num_tow << std :: endl; // 0
    
    signed num_three = -100;
    std :: cout << num_three << std :: endl; // -100

    unsigned int num_four = 10;
    std :: cout << num_four << std :: endl; // 10

    // unsigned int num_four = -10; // problem
    // std :: cout << num_four << std :: endl; // 45936890

    typedef unsigned long UL;

    long long int num_fiv = 100001000;
    std :: cout << num_fiv << std :: endl; // 100001000

    UL num_si = 73694837646;
    std :: cout << num_si << std :: endl; // 73694837646
}