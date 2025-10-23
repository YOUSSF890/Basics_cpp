#include <iostream>

using namespace std;

void print(int a, int b,int c, int d)
{
    cout <<  "youssef age = " << a << "\n";
    cout <<  "aya age = " << b << "\n";
    cout <<  "mohammed age = " << c << "\n";
    cout <<  "amine age = " << d << "\n";
}

void print(int a, int b,int c)
{
    cout <<  "youssef1 age = " << a << "\n";
    cout <<  "aya1 age = " << b << "\n";
    cout <<  "mohammed1 age = " << c << "\n";
}

void print(int a, int b)
{
    cout <<  "youssef2 age = " << a << "\n";
    cout <<  "aya2 age = " << b << "\n";
}

int main()
{
    print(10,18,20);
    cout << "==================================\n";
    print(10,18);
    cout << "==================================\n";
    print(10,18,30,90);
    cout << "==================================\n";
}