#include <iostream>
using namespace std;

int main()
{
    /*
        increment ==> ++
        decrement ==> --
    */
    cout << "============================================\n";
    cout << "============================================\n";

    int like = 0;
    cout << like++ << endl; // like == 0;    like++  ==name==>  post increment
    cout << like << endl; // like == 1

    cout << "============================================\n";
    cout << "============================================\n";

    int new_like = 0;
    cout << ++new_like << endl; // new_like == 1;    ++like  ==name==>  pre increment
    cout << new_like << endl; // like == 1
}