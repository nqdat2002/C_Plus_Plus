#include <iostream>
using namespace std;
typedef long long ll; 
bool Solve(ll a) { 
	ll tmp = a % 10; 
	ll n = a/10; 
	ll i; 
	while(n > 0) { 
		i = n % 10; 
		if(tmp - i != 1 && tmp - i != -1) 
			return false; 	
		n /= 10;
	 	tmp = i;
	}
	return true;
} 
int main() {
	int t; cin >> t;
	while(t--) { 
		ll n; 
		cin >> n; 
		if(Solve(n)) 
			cout << "YES" << endl; 
		else 
			cout << "NO" << endl; 
	} 
	return 0; 
}
