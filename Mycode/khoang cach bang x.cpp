#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t, n, k;
	cin >> t;
	while (t --) { 
		cin >> n >> k;
		int a[100005];
		for (int i = 0 ; i < n ; i ++) 
			cin >> a[i];
		sort(a, a + n);
		int cnt = 0;
		for (int i = n - 1 ; i >= 0 ; i --) {	
			int tmp = lower_bound(a, a + n, a[i] - k) - a;
			if (a[tmp] + k == a[i]) {
				cnt = 1;
				break;
			}
		}
		if (cnt == 1)
			cout << 1 << endl;
		else 
			cout << -1 << endl;
	}
	return 0;
}