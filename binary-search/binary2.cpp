//binary search on nearly sorted array
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target){
    int start=0;
    int end= nums.size()-1;
    while(end>=start){
        int mid=(start+end)/2;
        if((mid-1)>=(0) && nums[mid-1]==target){
            return mid-1;
        }
        if(nums[mid]==target){
            return mid;
        }
        if((mid+1)<=(nums.size()-1) && nums[mid+1]==target){
            return mid+1;
        }
        if(nums[mid]>target){
            if(mid-2<0){
                return -1;
            }
            end=mid-2;
        }else{
            if(mid+2>nums.size()){
                return -1;
            }
            start=mid+2;
        }
    }
    return -1;
}

int main(){
    vector<int> nums={20,10,30,40};
    cout<<binarySearch(nums,40);

}