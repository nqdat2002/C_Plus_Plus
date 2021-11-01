#include <bits/stdc++.h>
using namespace std;
int Solve(int arr1[], int arr2[], int m, int n){
	int res = 0, sum = 0;
	for(int i = 0; i < m; i ++){
		sum += arr1[i];
		int sum_1 = 0;
		for(int j = i + 1; j < n; j ++)
			sum_1 += arr2[j];
		res = max(res, sum_1 + sum);
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		int m, n, arr1[1005], arr2[1005];
		cin >> m >> n;
		for(int i = 0; i < m; i ++)
			cin >> arr1[i];
		for(int i = 0; i < n; i ++)
			cin >> arr2[i];
			
		int ans = Solve(arr1, arr2, m , n);
		int tmp = Solve(arr2, arr1, n , m);
		ans = max(ans, tmp);
		cout << ans << endl;
	}
	return 0;
}
