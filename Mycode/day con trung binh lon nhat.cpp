#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<ll> a;
		for (int i = 0; i < n; i++){
			ll x; cin >> x;
			a.push_back(x);
		}
		ll res = -1e9 + 7; 
		int idx = 0;
		for (int i = 0; i < n - k + 1; i ++) {
			ll sum = 0; 
			for (int j = i; j < i + k; j ++) 
				sum += a[j];
			if (sum > res) {
				res = sum; 
				idx = i;
			}
		}
		for (int i = idx; i < idx + k; i ++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
