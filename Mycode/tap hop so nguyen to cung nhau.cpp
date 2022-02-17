#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string Solve(ll n, ll m){
	ll S = n * (n + 1) / 2;
	ll a = (S + m) / 2;
	ll b = S - (S + m) / 2;
	if(S < m) return "No";
	else{
	   	if(a + b == S && a - b == m){
	   		if(__gcd(a, b) == 1) 
		  	 	return "Yes";
	   		else 
			  	return "No";
		}	
		else 
			return "No";
	}
}
int main(){
	int t; cin >> t;
	while (t--) {
	   	ll n, m; cin >> n >> m;
	   	cout << Solve(n, m) << endl;
	}
	return 0;
}
