#include <iostream>

using namespace std;

int main()
{
    cout << min(10, -20) << endl; //-20
    cout << min('c', 'a') << endl; //'a'
    // cout << min({100, 12, 545, 400, -600}) << endl; 

    cout << "==================================\n";

    cout << max(10, -20) << endl; // 10
    cout << max('c', 'a') << endl; // c
    // cout << max({10,5}) << endl;

}