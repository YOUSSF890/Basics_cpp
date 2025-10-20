#include <iostream>

int a = 100;

void test()
{
    int b = 200;
    std::cout << a << " global vareabl,e\n"; // Global variables.
    std::cout << b << " local vareable\n"; // Local variables.

}

int main()
{
    /*
        - variables scope
        - Global variables. متغير عام
        - Local variables. متغيرمحلي
    */
    const int num = 0; // constant variables
    int b = 200;
    std::cout << a << " global vareable\n"; // Global variables.
    std::cout << b << " local vareable\n"; // Local variables.
    test();
    return (0);
}