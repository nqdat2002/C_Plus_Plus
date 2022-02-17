#include <bits/stdc++.h>
// dynamic programming
using namespace std;
bool Swapp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int Char_To_Number(char c){
    return c - '0';
}
void Solve(){
    int m, n; 
	cin >> m >> n;
    string str; 
	cin >> str;
    long long dp[str.length()][n];
    memset(dp, 0, sizeof(dp));
    dp[0][Char_To_Number(str[0]) % n] = 1;
    for(int i = 1; i < str.length(); i++){
        dp[i][Char_To_Number(str[i]) % n] ++;
        for(int j = 0; j < n; j++){
            dp[i][j] += dp[i - 1][j];
            dp[i][(j * 10 + Char_To_Number(str[i])) % n] += dp[i - 1][j];
        }
    }
    cout << dp[str.length() - 1][0];
}
 
int main(){
    int t; 
	cin >> t;
    while(t--){
        Solve();
        cout << endl;
    }
    return 0;
}