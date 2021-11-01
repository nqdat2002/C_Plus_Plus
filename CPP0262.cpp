#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t; cin >> t;
	while (t--) {
	   	ll n, m; cin >> n >> m;
	   	ll S = n * (n + 1) / 2;
	   	ll a = (S + m) / 2;
	   	ll b = S - (S + m) / 2;
	   	if(S < m) cout << "No" << endl;
	   	else{
	   		if(a + b == S && a - b == m){
	   			if(__gcd(a, b) == 1) 
			  	 	cout << "Yes" << endl;
	   			else 
			 	  	cout << "No" << endl;
			}	
			else 
				cout << "No" << endl;
	   	}
	}
	return 0;
}
