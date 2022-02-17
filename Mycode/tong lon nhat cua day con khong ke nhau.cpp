#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, sum1 = 0,sum2 = 0;
		cin >> n;
		long arr[100005], Dp[100005] = {0};
		for(int i = 1 ; i <= n ; i ++){
			cin >> arr[i];
		}
		Dp[1] = arr[1];
		Dp[2] = max(arr[1], arr[2]);
		for(int i = 3; i <= n ; i ++){
			Dp[i] = max(Dp[i-2] + arr[i], Dp[i-1]);
		}
		cout << Dp[n];
		cout << endl;
	}
	return 0;
}