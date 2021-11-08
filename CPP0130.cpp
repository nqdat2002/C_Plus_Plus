#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		while (n % 2 == 0) {
			cout << 2 << " "; 
			n /= 2;
		}
		ll i = 3;
		while (i <= sqrt(n)) {
			while (n % i == 0) {
				cout << i << " ";
				n /= i;
			}
			i += 2;
		}
		if(n > 2)
			cout << n;
		cout << endl;
	}
	return 0;
}
