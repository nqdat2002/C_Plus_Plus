#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<int> arr(n);
		for (int i = 0 ; i < n ; i++)
			cin >> arr[i];
		sort(arr.begin(), arr.end());
		int res = 1000;
		for (int i = 0; i < n - 1; i++) {
			if (res > arr[i + 1] - arr[i])
				res = arr[i + 1] - arr[i];
		}
		cout << res << endl;
	}
	return 0;
}