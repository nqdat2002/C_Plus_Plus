#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) a.begin(),a.end()

typedef long long ll;
const ll mod = 1e9 + 7;
// Author: Nguyen Quoc Dat
// Code: B20DCPT053
// Organization: PTIT
// Date:
// Program:
// -------------------  Your code STARTS here !!!---------------------------
ll a[23];
void init(){
	arr[0] = 1;
	for(int i = 1; i <= 20; i ++){
		a[i] = a[i - 1] * i;
	}
}
void Solve(){
	int N, G, R, B;
	cin >> N >> G >> R >> B;
	ll ans = 0;
	for(int i = N; i >= R; i --){
		for(int j = N - R; j >= G; j --){
			int k = N - j - i;
			if(k >= B){
				ans += a[N]/(a[i] * a[j] * a[k]);
			}
		}
	}
	cout << ans << endl;
}
int main(){
	int t; cin >> t;
	init();
	while(t--){
		Solve();
	}
	return 0;
}
