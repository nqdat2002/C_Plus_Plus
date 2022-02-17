#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int ans = 10000;
		for (int i = 0; i < n ; i++) {
			for (int j = i + 1; j < n; j++) {
				int tmp = arr[i] + arr[j];
				if(abs(tmp) < abs(ans)) 
					ans=tmp;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
