#include<bits/stdc++.h>
using namespace std;

string reverseStringIII(string& s){
//Take two pointers
int left = 0, right = 0;
while(left<s.length()){
    //Traverse right pointer till you find Blank spaces
    while(right<s.length() && s[right] != ' '){
        right++;
    }
    //Reverse the part of the strings
    reverse(s.begin()+left,s.begin()+right);
    left = ++right; //Update both pointers
}
return s;
}

int main(){
    string s = "Let's take LeetCode contest";
    reverseStringIII(s);
    cout<<s<<endl;
    return 0;
}