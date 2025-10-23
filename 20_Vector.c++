#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20,30,60};

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << " ";
    }
    cout << "\n==============\n";

    nums.push_back(100);
    for (int a = 0; a < nums.size(); a++)
    {
        cout << nums.at(a) << " ";
    }
     cout << "\n==============\n";

    nums.clear(); // clear vector
    cout << nums.size() << "\n";

}