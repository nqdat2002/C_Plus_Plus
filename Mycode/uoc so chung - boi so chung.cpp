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
		ll a, b; cin >> a >> b;
		cout << (ll)a * b/__gcd(a, b) << " " << __gcd(a, b) << endl;
	}
	return 0;
}

