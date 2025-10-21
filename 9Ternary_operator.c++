#include <iostream>
using namespace std;

/*
    -control Foll
    --Ternary operator

    -syntax
    -- (Condition is True) ? True : Folse

*/


int main()
{
    int age = 18;

    cout << (age >= 20 ? "good youssef you are great" : (age >= 18)? "great" : "youssef you are not great");


    string str = age >= 20 ? "good youssef you are great" : "youssef you are not great";

}
