#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a;
		for (int i = 0 ; i < n ; i ++){
			int x; cin >> x;
			a.push_back(x);
		}
		for (int i = 0 ; i < n - 1 ; i ++) {
			if (a[i] != 0 && a[i + 1] == a[i]) {
				a[i] *= 2; 
				a[i + 1] = 0;
			}
		}
		int idx = 0;
		for (int i = 0 ; i < n ; i ++) {
			if (a[i] != 0) {
				cout << a[i] << " "; 
				idx++;
			}
		}
		for (int i = id ; i < n ; i ++) 
			cout << "0" << " ";
		cout << endl;
	}
	return 0;
}
