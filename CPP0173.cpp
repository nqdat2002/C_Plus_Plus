#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		ll X, Y, Z, N;
		cin >> X >> Y >> Z >> N;
		ll tmp1 = X * Y /__gcd(X, Y);
		tmp1 = tmp1 * Z/__gcd(tmp1, Z);
		ll a = pow(10, N - 1);
		ll b = pow(10, N);
		if (tmp1 >= b)
			cout << -1 ;
		else {
			ll ans = a % tmp1;
			ll res = a + tmp1 - ans;
			cout << ((ans == 0) ? a : res);
		}
		cout << endl;
	}
	return 0;
}
