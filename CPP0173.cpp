#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; 
	cin >> t;
	while (t--) {
		long long int X, Y, Z, N;
		cin >> X >> Y >> Z >> N;
		long long int tmp1 = X * Y /__gcd(X, Y);
		tmp1 = tmp1 * Z/__gcd(tmp1, Z);
		long long int a = pow(10, N - 1);
		long long int b = pow(10, N);
		if (tmp1 >= b)
			cout << -1 ;
		else {
			long long int ans = a % tmp1;
			long long int res = a + tmp1 - ans;
			if (ans == 0)
				cout << a ;
			else
				cout << res ;
		}
		cout << endl;
	}
	return 0;
}
