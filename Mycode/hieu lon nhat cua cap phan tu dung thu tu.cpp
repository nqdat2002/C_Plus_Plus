#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll Process(vector<int> arr, int n){
	ll res = -1e6;
	for (int i = n - 1 ; i >= 0 ; i --) 
		for (int j = i ; j >= 0 ; j --)
			if (arr[i] - arr[j] > res) 
				res = arr[i] - arr[j];
	return res;
}
void Solve(){
	int n; cin >> n;
	vector <int> arr(1005);
	for (int i = 0 ; i < n ; i ++)
		cin >> arr[i];
	ll res = Process(arr, n);
	if (res <= 0)
		cout << "-1";
	else
		cout << res;
}
int main() {
	int t;cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

