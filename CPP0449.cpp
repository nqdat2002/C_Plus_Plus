#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, k;
	cin >> t;
	while (t --) { 
		cin >> n >> k;
		int arr[100005];
		for (int i = 0 ; i < n ; i ++) 
			cin >> arr[i];
		sort(arr, arr + n);
		int cnt = 0;
		for (int i = n - 1 ; i >= 0 ; i --) {	
			int tmp = lower_bound(arr, arr + n, arr[i] - k) - arr;
			if (arr[tmp] + k == arr[i]) {
				cnt = 1;
				break;
			}
		}
		if (cnt == 1)
			cout << 1 << endl;
		else 
			cout << -1 << endl;
	}
	return 0;
}
