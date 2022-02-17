#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) { 
		int n, k = 0; cin >> n;
		int a[n], res[n];
		for (int i = 0; i < n ; i ++)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0 ; i < n ; i ++)
			if (i % 2 == 0)
				res[i] = a[k ++];
		for (int i = 0 ; i < n ; i ++) 
			if (i % 2 == 1)
				res[i] = a[k ++];
		for (int i = 0 ; i < n ; i ++)
			cout << res[i] << " ";
		cout << endl;
	}
	return 0;
}