#include <iomanip>
#include <iostream>

/*
    - Primitive Data Type
        * float ==> Floating Point Number
    char ==> character
    ASCII Value
*/

int main()
{
    float num = 9.5f + 10.45f;
    double mm = 9.5 + 10.45;
    
    std :: cout << num << std::endl;
    std :: cout << mm << std::endl;

    char n1 = 'A';
    std :: cout << int(n1) << "\n";
    std :: cout << char(65) << "\n";

    // boolean
    bool test = true;
    std :: cout << test + 10 << "\n";  // 1 + 10

    bool n2 = 10 > 100;     // yes ==> true = 1
    bool n3 = 10 < 100;     // yes ==> false = 1

    std :: cout << n2 << "\n";  // 1
    std :: cout << n3 << "\n";  // 0

    bool n4 = 100;
    bool n5 = -100;
    bool n6 = 0;
    std :: cout << n4 << "\n";  // 1
    std :: cout << n5 << "\n";  // 1
    std :: cout << n6 << "\n";  // 0

}