#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<int> arr(n);
		int tmp = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] > tmp) 
				tmp = arr[i];
		}
		vector<int> arr_cnt (tmp + 2);
		for (int i = 0; i <= tmp; i++)
			arr_cnt[i] = 0;
		for (int i = 0; i < n; i++)
			arr_cnt[arr[i]] ++;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (arr_cnt[arr[i]] > 1) {
				for (int j = 0; j < i; j++) {
					if (arr[i] == arr[j]) {
						ans = 1;
						cout << arr[i] << endl;
						break;
					}
				}
			}
			if (ans == 1)
				break;
		}
		if (ans == 0)
			cout << -1 << endl;
	}
	return 0;
}
