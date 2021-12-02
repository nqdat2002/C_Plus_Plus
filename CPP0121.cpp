#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Solve(){
	ll a, b; cin >> a >> b;
	cout << (ll)a * b/__gcd(a, b) << " " << __gcd(a, b) << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		Solve();
	}
	return 0;
}
