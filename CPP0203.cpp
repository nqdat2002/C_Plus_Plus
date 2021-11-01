#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> arr, int n) {
	int l = 0, r = arr.size() - 1;
	while (l <= r) {
		int tmp = (l + r) / 2;
		if (arr.at(tmp) == n) 
			return 1;
		else if (arr.at(tmp) < n) 
			l = tmp + 1;
		else 
			r = tmp - 1;
	}
	return 0;
}
int main() {
	int t; 
	cin >> t;
	while (t--){
		int n; 
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)	
			cin >> arr[i];
		sort(arr.begin(), arr.end());
		if (arr[n - 1] <= 0)
			cout << 1 << endl;
		else {
			for (int i = 1; i <=arr[n - 1] + 1; i++) {
				if (!BinarySearch(arr, i)) {
					cout << i << endl;
					break;
				}
			}
		}
	}
	return 0;
}

