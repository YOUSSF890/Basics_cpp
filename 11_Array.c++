#include <iostream>

using namespace std;

int main()
{
    int nums[5] = {100,251,565,10,2};
    cout << sizeof(nums) << endl; // 4 * 5 = 20 Bytes

    double numss[3]{15,125.3,2.2};
    cout << sizeof(numss) << endl; // 8 * 3 = 24 Bytes

    int nu[] = {1,1,44};
    cout << sizeof(numss) << endl; // 4 * 3 = 12 Bytes

    // char str[] = "youssef lagzouli";
}
