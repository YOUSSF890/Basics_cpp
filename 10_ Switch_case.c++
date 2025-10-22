#include <iostream>

using namespace std;

/*


*/


int main()
{
    int day; // integer 

    cin >> day;

    switch(day)
    {
        case 1: // if 
            cout << "one phone\n";
            break ;
        case 2: // else if
            cout << "tow phone\n"; // not break print 2 && 3
        case 3:
            cout << "three phone\n";
            break ;
        case 4:
        case 5: // 4 || 5 print four phone
            cout << "four phone\n";
            break ;
        default:
            cout << "five phone\n";
    }

    // char 
    char b;
    switch(b)  // one caracter
    {
        case 'x':
            cout << "one phone\n";
            break ;
    }
    // float  ==> broplam
    // float c = 10;
    // switch(c)
    // {
    //     case 10.5:
    //         cout << "one phone\n";
    //         break ;
    // }

    return (1);

}