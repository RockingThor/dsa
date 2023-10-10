// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int size, int index)
{
    if (index == size)
        return;
    cout << arr[index] << " ";
    return printArr(arr, size, ++index);
}

int searchElements(int *arr, int size, int el, int index)
{
    if (index == size)
        return -1;
    if (arr[index] == el)
        return index;
    return searchElements(arr, size, el, ++index);
}

int findMin(int *arr, int size, int index, int min)
{
    if (index == size)
        return min;
    if (arr[index] < min)
        min = arr[index];
    return findMin(arr, size, ++index, min);
}

void findEvenNumbers(int *arr, int size, int index, vector<int> &even)
{
    if (index == size)
        return;
    if (arr[index] % 2 == 0)
        even.push_back(arr[index]);
    return findEvenNumbers(arr, size, ++index, even);
}

void makeDouble(int *arr, int size, int index)
{
    if (index == size)
        return;
    arr[index] *= 2;
    return makeDouble(arr, size, ++index);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 0};
    // printArr(arr,4,0);
    // cout<<searchElements(arr, 4, -1, 0);
    // cout<<findMin(arr, 5, 0, arr[0]);
    // vector<int> even;
    // findEvenNumbers(arr, 5, 0, even);
    // for(auto num: even){
    //     cout<<num<<" ";
    // }
    return 0;
}