#include <bits/stdc++.h>
using namespace std;
int arr[505][505];
int n, m;
void solve(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	int dp[n][m];
	for(int i = 0; i < n; i++){
		dp[i][0] = arr[i][0];
	}
	for(int i = 0; i < m; i++){
		dp[0][i] = arr[0][i];
	}
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			if(arr[i][j]){
				dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
			}
			else
				dp[i][j] = 0;
		}
	}
	int res = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			res = max(res, dp[i][j]);
		}
	}
	cout << res << endl;
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
