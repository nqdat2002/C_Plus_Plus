#include<bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int> arr, int n, int k) {
	int left = 0, right = n - 1;
	while (left <= right) {
		int tmp = (left + right) / 2;
		if (arr[tmp] == k) 
			return 1;
		else if (k > arr[tmp]) 
			left = tmp + 1;
		else 
			right = tmp - 1;
	}
	return -1;
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr.begin(), arr.end());
		int cnt = 0;
		for (int i = arr[0] + 1; i < arr[n - 1]; i++)
			if (Binary_Search(arr, n, i) == -1)
				cnt++;
		cout << cnt ;
	}
	return 0;
}
