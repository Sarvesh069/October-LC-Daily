#include<bits/stdc++.h>
using namespace std;

class Hasshmap{
    vector<int>keyValueArr;
    public:
        Hasshmap(){
            keyValueArr = vector<int>(1000002,-1);
        }

        void put(int key, int value){
            keyValueArr[key] = value;
        }

        int get(int key){
            return keyValueArr[key];
        }

        void remove(int key){
            keyValueArr[key] = -1;
        }
};

int main(){
    Hasshmap mp;
    mp.put(1,1);
    mp.put(2,2);
    cout<<mp.get(1)<<endl;
    cout<<mp.get(2)<<endl;
    cout<<mp.get(3)<<endl;
    mp.put(2,1);
    cout<<mp.get(2)<<endl;
    mp.remove(2);
    cout<<mp.get(2);
    return 0;
}