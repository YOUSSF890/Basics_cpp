#include <string.h>
#include <iostream>
using namespace std;

/*
    -string
    --concatentings strings
    -----Normal way
    -----strcat ==> include string.h
    ----- with +
    -----append 
*/

int main()
{
    char nums[] = "Youssef ";
    char num1[] = "lagzouli";

    cout << nums << num1 << endl;
    cout << strcat(nums, num1) << endl;

    string num2 = "Youssef ";
    string num3 = "lagzouli";

    cout << num2 + num3 << endl;
    cout << num2.append(num3) << endl;

    return (1);
}