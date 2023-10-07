//Copied this code from YT. Still learning DP :'(
    //Will upload my learnings once DP is done and dusted

#include<bits/stdc++.h>
using namespace std;


int numOfArrays(int n, int m, int k){
    static const int MOD = 1e9 + 7;
        vector<vector<vector<uint64_t>>> dp(2, vector<vector<uint64_t>>(m + 1, vector<uint64_t>(k + 1)));
        vector<vector<vector<uint64_t>>> prefix_dp(2, vector<vector<uint64_t>>(m + 1, vector<uint64_t>(k + 1)));
        for (uint64_t i = 1; i <= m; ++i) {
            dp[1][i][1] = 1;
            prefix_dp[1][i][1] = (prefix_dp[1][i - 1][1] + dp[1][i][1]) % MOD;
        }
        for (uint64_t l = 2; l <= n; ++l) {
            for (uint64_t i = 1; i <= m; ++i) {
                for (uint64_t j = 1; j <= k; ++j) {
                    dp[l % 2][i][j] = (i * dp[(l - 1) % 2][i][j] % MOD + prefix_dp[(l - 1) % 2][i - 1][j - 1]) % MOD;
                    prefix_dp[l % 2][i][j] = (prefix_dp[l % 2][i - 1][j] + dp[l % 2][i][j]) % MOD;
                }
            }
        }
        return prefix_dp[n % 2][m][k];
}

int main(){
    int n = 2, m = 3, k = 1;
    int res = numOfArrays(n,m,k);
    cout<<res;
    return 0;
}