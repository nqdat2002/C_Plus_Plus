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
		sort(arr.begin(),arr.end());
		cout << arr[k-1] << endl;
	}
	return 0;
}
