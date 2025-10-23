#include <iostream>
using namespace std;

void ft_function(string str, string name = "Youssef")
{
    cout << str << "  , "<< name << endl;
}

int main()
{
    ft_function("hello","aya");
    ft_function("hello");
    return (1);
}