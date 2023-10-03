#include<bits/stdc++.h>
using namespace std;

int noOfGoodPairs(vector<int>nums){
    vector<int>freq(102);
    int total = 0;
    for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
    for(int i=0;i<freq.size();i++){
        {
            total += (freq[i]*(freq[i]-1))/2;
        }
    }
        return total;

}

int main(){
    vector<int>nums = {1,2,3,1,1,3};
    cout<<noOfGoodPairs(nums);
    return 0;
}