#include<bits/stdc++.h>
using namespace std;

vector<int> findFirstLastElement(vector<int>& nums, int target){
    int low = 0, high = nums.size()-1;
    vector<int> res{-1,-1};
    if(nums.size()<=1){
        if(nums.size()<0 || nums[0]!=target)
            return res;
        return {1,1};
    }
    //First
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(low<nums.size() && nums[low]==target)
        res[0] = low;
    low = 0, high = nums.size()-1;
    //Last
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]<=target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(high>-1 && nums[high] == target)
        res[1] = high;
    return res;
}


int main(){
    vector<int>arr = {2,2};
    vector<int>res = findFirstLastElement(arr,8);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;

}