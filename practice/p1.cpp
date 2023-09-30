#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {3,2,3};
    vector<int> store = nums;
    sort(store.begin(), store.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < store.size(); i++)
    {
        cout << store[i] << " ";
    }

    return 0;
}