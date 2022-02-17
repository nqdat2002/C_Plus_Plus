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

bool Prime(int n) {
	if(n < 2) 
		return false;
    for(int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main() {
	int t; cin >> t;
	while(t--){
	    ll n; cin >> n;
		for (ll i = 2; i <= n; i++) {
		    if (Prime(i) && Prime(n - i)) {
		        cout << i << " " << n - i;
		        break;
		    }
		}
		cout << endl;
	}
	return 0;		
}
