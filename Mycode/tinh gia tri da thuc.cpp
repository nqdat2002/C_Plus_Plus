#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const ll mod = 1e9 + 7;
int main() { 
	int T; cin >> T; 
	while (T--) { 
		ll n, x, a[1005];
		cin >> n >> x;  
		for (int &y : a) cin >> y; 
		ll ans = 0;
		for (int i = 0 ; i < n ; i ++) { 
			ll t = 1; 
			for (int j = n - i - 1; j > 0; j --)
				t = (t * x) % mod;
			ans += (a[i] * t) % mod; 
		} 
		cout << ans << endl;
	} 
	return 0; 
}

