#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n; 
	cin >> t;
	while (t--) {
		cin >> n;
		long long int res;
		vector <int> arr(n);
		for (int i = 0 ; i < n ; i ++)
			cin >> arr[i];
		res = - 1e9 + 7;
		for (int i = 0 ; i < n - 1 ; i ++) {
			long long int tmp = arr[i];
			if (tmp > res) 
				res = tmp;
			for (int j = i + 1 ; j < n ; j ++) {
				tmp = tmp * arr[j];
				if (tmp > res) 
					res = tmp;
			}
		}
		cout << res << endl;
	}
	return 0;
}
