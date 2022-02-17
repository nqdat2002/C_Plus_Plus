#include <iostream> 
#include <algorithm>
typedef long long ll;
using namespace std; 
int main(){ 
	int t; cin >> t; 
	while(t--) { 
		ll a, X, Y; 
		cin >> a >> X >> Y; 
		ll dem = __gcd(X, Y); 
		for (ll i = 0; i < dem ; i++)
			cout << a;
		cout << '\n'; 
	}
	return 0;
}

