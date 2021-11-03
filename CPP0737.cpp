#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k; 
		cin >> n >> k;
		long long arr[1005];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		long long max = -1e9 + 7; 
		int tmp = 0;
		for (int i = 0; i < n - k + 1; i ++) {
			long long sum = 0;
			for (int j = i; j < i + k; j ++) {
				sum += arr[j];
			}
			if (sum > max) {
				max = sum; 
				tmp = i;
			}
		}
		for (int i = tmp; i < tmp + k; i ++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
