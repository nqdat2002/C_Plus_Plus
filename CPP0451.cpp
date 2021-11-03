#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[1000005] = {0};
		for (int i = 0; i < n; i++) cin >> a[i];
		int k, x; cin >> k >> x;
		if (x > a[n - 1]) {
			a[n] = x;
			n++;
		}
		int z = lower_bound(a, a + n, x) - a;
		if (a[z] == x) {
			for (int i = z - k / 2; i < z; i ++){
			    if(i >= 0)
			    	cout << a[i] << " ";
			    else 
			    	cout << 0 <<" ";
			}
			
			for (int i = z + 1; i <= z + k / 2; i ++){
				if (i < n) 
					cout << a[i] << " ";
				else 
					cout << 0 << " ";
			}
		}
		cout << endl;
	}
	return 0;
}