#include<bits/stdc++.h>
// dynamic programming
using namespace std;
const long long int mod = 1e9 + 7;
long long int dp[1001][1001];
int main(){
	for(int i = 1; i <= 1000; i ++){
		for(int j = 0 ; j <= i; j ++){
			
			if(j == 0 || j == i) 
				dp[i][j] = 1; 
			else 
				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % mod; 
		} 
	} 
	int t;
	cin >> t;
	while(t--) {
		int n, r;
		cin >> n >> r;
		cout << dp[n][r];
		cout << endl;
	}
	return 0;
}
