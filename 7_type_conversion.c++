#include <iostream>
using namespace std; 

/*
    -Data Type
    --Type conversion
    ---Convert Data of one type to Another 

    --Implicit conversion
    ---Conversion Is Done Automatically complier

    --Explicit conversion AKA Type casting
    ---Conversion Is Done By The programmer

    --Data Loss
    ---When Larger Type Is converted to Smaller Type
*/

int main()
{
    cout << "======================================================\n";
    cout << "======================================================\n";
    int a;
    double b = 20.5;
    a = b;  // compiler will convert Double value
    cout << a << endl; // 20
    cout << sizeof(a) << endl; // 4 Bytes

    cout << "======================================================\n";
    cout << "======================================================\n";

    char c = 'C';
    int d = 20;
    cout << int(c) << endl; // 67  / int(c) ==name==>function like 
    cout << c + d << endl; // 67 + 20 = 87 

    cout << "======================================================\n";
    cout << "======================================================\n";

    int h = 20;
    double g = 20.5;
    cout << h + g << endl; // 20 + 20.5 = 40.5
    cout << sizeof(h + g) << endl; // 8 Bytes

    cout << "======================================================\n";
    cout << "======================================================\n";

    int e = 20;
    double f = 20.5;
    cout << h + (int)g << endl; // 20 + 20 = 40   int(g)  ==name==>  casting
    cout << sizeof(h + (int)g) << endl; // 4 Bytes

    cout << "======================================================\n";
    cout << "======================================================\n";



    cout << "======================================================\n";
    cout << "======================================================\n";
    cout << "======================================================\n";
    cout << "======================================================\n";
    cout << "======================================================\n";
    cout << "======================================================\n";
    cout << "======================================================\n";
    cout << "======================================================\n";
}