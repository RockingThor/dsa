// Smallest element in rotated array in logn
#include <iostream>
#include <vector>
using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int start = 0;
    int end = arr.size();
    int pos;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
        {
            int right, left;
            if (mid - k - 1 >= 0)
            {
                right = mid - k;
            }
            else
            {
                right = 0;
            }
            if (mid + k < arr.size())
            {
                left = mid + k - 1;
            }
            else
            {
                left = arr.size() - 1;
            }
            while ((mid - right + left - mid) > (k - 1))
            {
                if (abs(arr[right] - x) <= abs(arr[left] - x))
                {
                    left--;
                }
                else
                {
                    right++;
                }
            }
            vector<int> ans;
            for (int i = right; i <= left; i++)
            {
                ans.push_back(arr[i]);
            }
            return ans;
        }
        if (arr[mid] > x)
        {
            pos = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << pos;
    int right, left;
    if (pos - k - 1 >= 0)
    {
        right = pos - k;
    }
    else
    {
        right = 0;
    }
    if (pos + k < arr.size())
    {
        left = pos + k - 1;
    }
    else
    {
        left = arr.size() - 1;
    }
    while ((pos - right + left - pos) > (k - 1))
    {
        if (abs(arr[right] - x) <= abs(arr[left] - x))
        {
            left--;
        }
        else
        {
            right++;
        }
    }
    vector<int> ans;
    for (int i = right; i <= left; i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> ans = findClosestElements(nums, 4, 7);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 1;
}