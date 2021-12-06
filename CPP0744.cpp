#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[23];
int n, r, g, b;
void init(){
	a[0] = 1;
	for(int i = 1; i <= 22; i ++)
		a[i] = a[i - 1] * i;
}
void Solve(){
	cin >> n >> g >> r >> b;
	ll res = 0;
	for(int i = n; i >= r; i --){
		for(int j = n - r; j >= g; j --){
			int k = n - j - i;
			if(k >= b)
				res += a[n]/(a[i] * a[j] * a[k]);	
		}
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t;
	init();
	while(t--){
		Solve();
	}
	return 0;
}
