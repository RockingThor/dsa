// Smallest element in rotated array in logn
#include <iostream>
#include <vector>
using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int start = 0;
    int end = arr.size();
    int pos;
    while(end>=start){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            pos=mid;
            break;
        }
        if(arr[mid]>x){
            pos=mid;
            end=mid-1;
        }else{
            pos=mid;
            start=mid+1;
        }
    }
    int left,right;
    if(arr[pos]!=x){
        if((pos+1)<arr.size() && abs(arr[pos+1]-x)<abs(arr[pos]-x) ){
            pos=x+1;
        }
    }
    if((pos-k-1)>=0){
        left=pos-k-1;
    }else{
        pos=0;
    }
    if(pos+k-1<=arr.size()-1){
        right=pos+k-1;
    }else{
        right=arr.size()-1;
    }
    while(right-left>=k){
        if(abs(arr[left]-x)<=abs(arr[right]-x)){
            right--;
        }else{
            left++;
        }
    }
    vector<int> answer;
    for(int i=left;i<=right;i++){
        answer.push_back(arr[i]);
    }
    return answer;
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