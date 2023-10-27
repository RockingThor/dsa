#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = arr[start], count = 0;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] < pivot)
            count++;
    }
    swap(arr[start], arr[start + count]);
    int left = start, right = end;
    while (left < start + count && right > start + count)
    {
        if (arr[left] > pivot && arr[right] < pivot)
        {
            swap(arr[left], arr[right]);
        }
        else if (arr[left] < pivot)
        {
            left++;
        }
        else if (arr[right] > pivot)
        {
            right--;
        }
        else
        {
            left++, right--;
        }
    }
    quickSort(arr, start, start + count - 1);
    quickSort(arr, start + count + 1, end);
}

int main()
{
    int arr[] = {1, 6, 4, 3, 0, 10, 11, 21, 18};
    quickSort(arr, 0, 8);
    for (auto x : arr)
    {
        cout << x << " ";
    }
}