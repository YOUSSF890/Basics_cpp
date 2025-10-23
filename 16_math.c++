#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << pow(2, 4) << endl; // 2 * 2 * 2 * 2 = 16
    cout << fmod(11.5, 2) << endl; // 1.5 + 10 / 2 = 1.5 
    cout << ceil(9.1) << endl; // max 10
    cout << floor(9.1) << endl; /// min 9
    cout << round(9.1) << endl; /// x < x.5 ==> x == 9
    cout << round(9.5) << endl; /// x >= x.5 ==> x + 1 == 10
    cout << round(9.6) << endl; /// x >= x.5 ==> x + 1 == 10
}