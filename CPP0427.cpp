#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<int> arr(n);
		for (int i = 0 ; i < n ; i ++)
			cin >> arr[i];
		for (int i = 0 ; i < n - 1 ; i ++) {
			if (arr[i] != 0 && arr[i + 1] == arr[i]) {
				arr[i] = arr[i] * 2; 
				arr[i + 1] = 0;
			}
		}
		int tmp = 0;
		for (int i = 0 ; i < n ; i ++) {
			if (arr[i] != 0) {
				cout << arr[i] << " "; 
				tmp ++;
			}
		}
		for (int i = tmp ; i < n ; i ++) 
			cout << "0" << " ";
		cout << endl;
	}
	return 0;
}
