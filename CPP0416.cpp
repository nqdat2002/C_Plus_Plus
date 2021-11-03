#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n >> k;
		vector<int> arr(n);
		int cnt=0;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int i = 0; i < n ; i++) {
			for (int j = i + 1; j < n; j++) {
				if(arr[i]+arr[j] == k)
					cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

