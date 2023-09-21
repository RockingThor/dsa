// find the odd occurring element

// observation: Wherever the answer is, in the left side of the answer the pair of elements's start
// index will be at even index and the second element of the pair will be in odd index. In the right side of the element the starting element's index of the pair always will be odd and next index will be even
// Also the answer will always be present in the even index

// num & 1==true =>odd number

#include <iostream>
#include <vector>
using namespace std;

int findOddOccur(vector<int> nums)
{
    int start = 0;
    int end = nums.size() - 1;
    while (end >= start)
    {
        int mid = (start + end) / 2;
        if (mid % 2 == 0 && nums[mid + 1] != nums[mid] && nums[mid - 1] != nums[mid])
        {
            return mid;
        }
        if (mid % 2 == 0 && nums[mid + 1] == nums[mid])
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 4, 4, 3, 3, 5, 2, 2};
    cout << findOddOccur(nums);
}