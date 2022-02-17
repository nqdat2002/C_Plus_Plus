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

int main(){
	int t; cin >> t;
	while(t--){
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

