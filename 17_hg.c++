#include <iostream>

using namespace std;

int main()
{
    char cr= 'S';
    cout << tolower('A') << "\n"; // a = 97 
    cout << char(tolower('A')) << "\n"; // a 
    

    cout << toupper('b') << "\n"; //  B = 66 
    cout << char(toupper('B')) << "\n"; // B

    if (isupper(cr)) // isupper('A') ==> return 1  //  isupper('a') ==> return 0
    {
        cout << "upper\n";
    }
    else if (islower(cr)) // islower('a') ==> return 1  //  islower('A') ==> return 0
    {
        cout << "lower\n";
    }

    string str = "y o u   ss\n\te f";
    int i = 0;
    while (str[i])
    {
        if (isspace(str[i])) // delete space
            cout << str[i] << endl;
        i++;
    }
}