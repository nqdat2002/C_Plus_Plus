#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
int main() { 
	int t; cin >> t; 
	while (t--) { 
		ll n, x, res = 0; cin >> n >> x; 
		vector<ll> a(2005); 
		for (int i = 0 ; i < n ; i ++) cin >> a[i]; 
		for (int i = 0 ; i < n ; i ++) { 
			ll tmp = 1; 
			for (int j = n - i - 1; j > 0; j --)
				tmp = (tmp * x) % mod; 
			res += arr[i] * tmp; 
			res = res % mod; 
		} 
		cout << res << endl; 
	} 
	return 0; 
}
