#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve(){
	ll x, y, z, n;
	cin >> x >> y >> z >> n;
	ll a = pow(10, n - 1), b = pow(10, n);
	ll tmp1 = x * y /__gcd(x, y);
	tmp1 = tmp1 * z/__gcd(tmp1, z);
	if (tmp1 >= b)
		cout << -1;
	else {
		ll ans = a % tmp1;
		ll res = a + tmp1 - ans;
		if (ans == 0)
			cout << a ;
		else
			cout << res ;
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
	   Solve();
	}
	return 0;
}

