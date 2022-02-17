#include<bits/stdc++.h>
// dynamic programming
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll dp[1001][1001];
int main(){
	for(int i = 0; i <= 1000; i ++){
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
		cout << dp[n][r] << endl;
	}
	return 0;
}
