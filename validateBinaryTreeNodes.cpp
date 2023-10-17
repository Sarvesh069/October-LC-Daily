#include<bits/stdc++.h>
using namespace std;

bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> children;
        
        for(int e : leftChild){
            if(e != -1) children.push_back(e);
        }
        
        for(int e : rightChild){
            if(e != -1) children.push_back(e);
        }
        
        //a valid tree should have exactly n-1 edges
        if(children.size() != n-1) return false;
        
        return true;
}

int main(){
    int n = 4;
    vector<int>leftChild = {1,-1,3,-1};
    vector<int>rightChild = {2,3,-1,-1};
    cout<<validateBinaryTreeNodes(n,leftChild,rightChild);
    return 0;
}