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
		int n;cin >> n;
		vector <int> a;
		for (int i = 0 ; i < n ; i ++){
			int x; cin >> x;
			a.push_back(x);
		}
		ll res = - 1e9 + 7;
		for (int i = 0 ; i < n ; i ++) {
			ll tmp = a[i];
			if (tmp > res) 
				res = tmp;
			for (int j = i + 1 ; j < n ; j ++) {
				tmp = tmp * a[j];
				if (tmp > res) 
					res = tmp;
			}
		}
		cout << res << endl;
	}
	return 0;
}





