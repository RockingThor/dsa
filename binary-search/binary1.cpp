#include <iostream>
int binarySearch(int dividend, int divisor){
    int start=0;
    int end=dividend;
    int ans;
    while(end>=start){
        int mid=(start+end)/2;
        if(mid*divisor==dividend){
            return mid;
        }
        if(mid*divisor>dividend){
            end=mid-1;
        }else{
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    std::cout<<binarySearch(29,7);
    return 0;
}