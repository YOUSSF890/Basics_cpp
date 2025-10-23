#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int , 6> nums = {100,200,300,400,500,600};

    cout << nums.front() << endl; // 100 First Element in array
    cout << nums.back() << endl; // 600 last Element in array
    cout << nums.at(1) << endl; // 200 Selact Element 
    cout << nums.size() << endl; // 4 * 6 = 24 Beytes
    cout << nums.empty() << endl; // array is empty ==> 1 / array is not empty ==> 0

    string num = "youssef";
    cout << num.front() << endl; // 100 First Element in string


}