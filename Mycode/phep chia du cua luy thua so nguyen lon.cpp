#include <bits/stdc++.h>
using namespace std;
#define xau int t; cin >> t; cin.ignore();
#define so int t; cin >> t;
typedef long long ll;
ll n, k, p;
ll Multi(ll a, ll b, ll p){
	if(b == 0) 
		return 0ll;
	ll tmp = Multi(a, b / 2, p);
	if(b & 1) 
		return (tmp * 2 + a) % p;
	return tmp * 2 % p;
}
ll POW(ll n, ll k, ll p){
	if(k == 0) 
		return 1;
	if(k == 1) 
		return n % p;
	ll tmp = POW(n, k / 2, p);
	ll a = Multi(tmp, tmp, p);
	if(k & 1) 
		return a * n % p;
	return a % p;
} 
void Solve(){
	string str; 
	ll Mod, b, res = 0; 
	cin >> str >> b >> Mod; 
	vector<int> arr(1005); 
	int len = str.size(); 
	for(int i = 0 ; i < len; i ++)
		arr[i] = str[i] - '0';
	for(int i = 0 ; i < len ; i ++)
		res = ( res * 10 + arr[i] ) % Mod; 
	cout << POW(res, b, Mod) << endl;
}
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
	   Solve();
	}
	return 0;
}

