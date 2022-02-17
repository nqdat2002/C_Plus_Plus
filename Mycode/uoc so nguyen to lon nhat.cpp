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

bool Prime(ll n) {
	if (n < 2) 
		return false;
	for (ll i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}
int main(){
	int t; cin >> t;
	while (t --) {
		ll n; cin >> n;
		ll i = 2;
		if (Prime(n)) cout << n;
		else {
			while (i <= n) {
				if (n % i == 0 && Prime(n / i)) {
					cout << n / i;
					break;
				}
				i++;
			}
		}
		cout << endl;
	}
	return 0;
}
