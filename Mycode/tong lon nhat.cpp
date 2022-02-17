#include <bits/stdc++.h>
using namespace std;
int Sum(int arr1[], int arr2[], int m, int n){
	int res = 0, sum = 0;
	for(int i = 0; i < m; i ++){
		sum += arr1[i];
		int sum_1 = 0;
		for(int j = i + 1; j < n; j ++){
			sum_1 += arr2[j];
		}
		res = max(res, sum_1 + sum);
	}
	return res;
}
void Solve(){
	int m, n; cin >> m >> n;
	int arr1[m], arr2[n];
	for(int &x:arr1) cin >> x;
	for(int &y:arr2) cin >> y;
	int ans = Sum(arr1, arr2, m , n);
	int tmp = Sum(arr2, arr1, n , m);
	ans = max(ans, tmp);
	cout << ans << endl;
}
int main(){
	int t; cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

