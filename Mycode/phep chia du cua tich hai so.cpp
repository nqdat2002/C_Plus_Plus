#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
ll Mul(ll a, ll b, ll c){ 
	if (b == 0) 
		return 0; 
	ll t = Mul(a, b / 2, c); 
	if (b % 2 == 0) 
		return (2 * (t % c)) % c; 
	else 
		return (a % c + 2 * (t % c)) % c; 
} 
int main(){ 
	int t; cin >> t; 
	while(t--) { 
		ll a,b,c;cin >> a >> b >> c; 
		cout << Mul (a, b, c) << endl;
	} 
	return 0; 
}