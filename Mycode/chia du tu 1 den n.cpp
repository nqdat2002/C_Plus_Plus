#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while (t--) {
	 	ll n, k, cnt = 0;
		cin >> n >> k;
		for(ll i = 1; i <= n; i ++)
			cnt = cnt + (i % k);
		cout << cnt << endl;	
	}
	return 0;
}
