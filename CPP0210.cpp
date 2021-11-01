#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n;	cin >> n;
		vector <int> a(1005);
		for (int i = 0 ; i < n ; i ++)
			cin >> a[i];
		long ans = -1e7;
		for (int i = n - 1 ; i >= 0 ; i --) {
			for (int j = i ; j >= 0 ; j --){
				if (a[i] - a[j] > ans) 
					ans = a[i] - a[j];
			}
		}
		if (ans <= 0) cout << "-1";
		else cout << ans;
		cout << endl;
	}
	return 0;
}
