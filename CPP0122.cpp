#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll LCM(ll a, ll b) {
    return (a*b)/__gcd(a,b);
}
int main () {
    int t; cin >> t;
    while (t--) {
    	ll n; cin >> n;
    	ll res = 1;
    	for (int i = 1; i <= n; i ++) 
    		res = LCM(res, i);
	cout << res << endl;
	}
    return 0;
}
