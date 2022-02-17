#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())

typedef long long ll;
const ll mod = 1e9 + 7;
// Author: Nguyen Quoc Dat
// Code: B20DCPT053
// Organization: PTIT
// Date:
// Program:
// -------------------  Your code STARTS here !!!---------------------------

ll LCM(ll a, ll b){
	return (ll)(a * b / __gcd(a, b));
}
int main () {
    int t; cin >> t;
    while (t--) {
    	ll n; cin >> n;
		ll res=1;
	    for (int i = 1; i <= n; i ++) 
	    	res = LCM(res, i);
		cout << res << endl;
	}
    return 0;
}

