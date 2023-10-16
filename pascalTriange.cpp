#include<bits/stdc++.h>
using namespace std;

vector<int> getPascalRow(int rowIndex){
    long long int res = 1;
    vector<int>result;
    for(int i=0;i<=rowIndex;i++){
            if(i == 0)
                res = 1;
            else{
                res = (res*(rowIndex-(i-1)))/i;
            }
            result.push_back(res);
        }
    return result;
}

int main(){
    int rowIndex = 3;
    vector<int>res = getPascalRow(rowIndex);
    for(auto x: res)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}