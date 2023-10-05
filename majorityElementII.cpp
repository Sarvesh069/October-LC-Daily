#include<bits/stdc++.h>
using namespace std;

vector<int> usingOptimalSolution(vector<int>& nums){
    //Using maps
    map<int,int> mp;
    vector<int>res;
    int mini = (int)(nums.size()/3)+1;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second >= mini)
            res.push_back(it->first);
    }
    return res;
}

vector<int> usingBestSolution(vector<int>& nums){
    int cnt1 = 0, cnt2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;
    vector<int>res;
    for(int i=0;i<nums.size();i++){
        if(cnt1 == 0 && ele2 != nums[i]){
            cnt1 = 1;
            ele1 = nums[i];
        }
        else if(cnt2 == 0 && ele1 != nums[i]){
            cnt2 = 1;
            ele2 = nums[i];
        }
        else if(ele1 == nums[i])
            cnt1++;
        else if(ele2 == nums[i])
            cnt2++;
        else
            cnt1--,cnt2--;
    }

    int mini = (int)(nums.size()/3)+1;
    cnt1 = 0, cnt2 = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == ele1)
            cnt1++;
        if(nums[i] == ele2)
            cnt2++;
    }
    if(cnt1>=mini)
        res.push_back(ele1);
    if(cnt2>=mini)
        res.push_back(ele2);
    return res;
}

void printArray(vector<int>nums){
    for(auto x: nums){
        cout<<x<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> nums = {3,2,3};
    vector<int> optimal = usingOptimalSolution(nums);
    cout<<"Printing Optimal result"<<endl;
    printArray(optimal);
    vector<int> best = usingBestSolution(nums);
    cout<<"Printing Best result"<<endl;
    printArray(best);
    return 0;
}