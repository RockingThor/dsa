#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    // now I have to merge
    vector<int> temp;
    int right = start, left = mid + 1;
    while (right <= mid && left <= end)
    {
        if (arr[right] <= arr[left])
        {
            temp.push_back(arr[right]);
            right++;
        }
        else
        {
            temp.push_back(arr[left]);
            left++;
        }
    }
    while (right <= mid)
    {
        temp.push_back(arr[right]);
        right++;
    }
    while (left <= end)
    {
        temp.push_back(arr[left]);
        left++;
    }
    // Transfer temp to the original arr;
    int i = start;
    for (auto x : temp)
    {
        arr[i] = x;
        ++i;
    }
}

void divide(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int mid = start + (end - start) / 2;
    divide(arr, start, mid);
    divide(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {5, 2, 1, 6, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    divide(arr, 0, size - 1);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}