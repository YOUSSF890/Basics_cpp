#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> nums = {10,20,30,500};
    vector<int> :: iterator it = nums.begin();
    auto its = nums.begin() + 1;

    cout << *it << "\n";

    cout << "\n=========================\n";
    
    cout << *its << "\n"; 

    cout << "\n=========================\n"; 

    cout << *nums.begin() << "\n";

    cout << "\n=========================\n";

    nums.erase(nums.begin(),nums.begin() + 2);
    cout << *nums.begin() << "\n";
}