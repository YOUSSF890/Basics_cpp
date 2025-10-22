#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int ,5> nums = {5,9,66,50,1};
    cout << nums[0] << "\n"; // 5
    cout << nums[1] << "\n"; // 9
    cout << nums[2] << "\n"; // 66
    cout << nums[3] << "\n"; // 50
    cout << nums[4] << "\n"; // 1

    nums.fill(10);
    cout << nums[0] << "\n"; // 10
    cout << nums[1] << "\n"; // 10
    cout << nums[2] << "\n"; // 10
    cout << nums[3] << "\n"; // 10
    cout << nums[4] << "\n"; // 10

    nums.fill(1);
    cout << nums[0] << "\n"; // 1
    cout << nums[1] << "\n"; // 1
    cout << nums[2] << "\n"; // 1
    cout << nums[3] << "\n"; // 1
    cout << nums[4] << "\n"; // 1


    cout << "Elements count" << nums.size() << "\n"; // 5
    return (1);
}