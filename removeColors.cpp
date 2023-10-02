#include<bits/stdc++.h>
using namespace std;

bool removeColors(string colors){
    int flag = 0;
    for(int i=1;i<colors.length();i++){
        if(colors[i] == colors[i-1] && colors[i] == colors[i+1])
        {
            if(colors[i] == 'A')
                flag++;
            if(colors[i] == 'B')
                flag--;
        }
        return flag>0;
    }
}

int main(){
    string color = "AAABABB";
    if(removeColors(color))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
