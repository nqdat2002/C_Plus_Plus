#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n; 
	cin >> t;
	while (t--) { 
		cin >> n;
		vector<int> arr(n), brr(n);
		for (int i = 0; i < n ; i ++)
			cin >> arr[i];
		sort(arr.begin(), arr.end());
		int cnt = 0;
		for (int i = 0 ; i < n ; i ++){
			if (i % 2 == 0)
				brr[i] = arr[cnt ++];
		}
		for (int i = 0 ; i < n ; i ++) {
			if (i % 2 == 1)
				brr[i] = arr[cnt ++];
		}
		for (int i = 0 ; i < n ; i ++)
			cout << brr[i] << " ";
		cout << endl;
	}
	return 0;
}
