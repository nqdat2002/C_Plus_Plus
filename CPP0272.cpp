#include <bits/stdc++.h>
const long long p = 1e9 + 7;
using namespace std;
// g(x)
long long gcd_of_array(long long arr[], int n){
	long long res = arr[0];
	for (int i = 0 ; i < n  ; i ++){
		res = __gcd(res, arr[i]);
	}
	return res;
}
// h(x)
long long Module_array(long long arr[], int n){
	long long res = 1;
	for(int i = 0 ; i < n ; i ++ ){
		res = (res * arr[i]);
		res = res % p ;
	}
	return res;
}
long long Mul(long long a, long long b, long long p){
	if(b==0) 
		return 0ll;
	long long tmp = Mul(a, b/2, p);
	if(b & 1) 
		return (tmp * 2 + a) % p;
	return tmp * 2 % p;
}
long long PoW(long long n,long long k,long long p){
	if(k == 0) 
		return 1;
	if(k == 1) 
		return n%p;
	long long tmp = PoW(n, k/2, p);
	long long a = Mul(tmp, tmp, p);
	if(k & 1) 
		return a * n % p;
	return a % p;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n ;
		long long arr[10005];
		for(int i = 0 ; i < n ; i ++) {
			cin >> arr[i];
		}
		long long res_multi = gcd_of_array(arr, n);
		long long res_mod = Module_array(arr, n);
		if(res_multi == 0 && res_mod == 0) 
			cout << "1";
		else if(res_multi == 0 && res_mod != 0) 
			cout << "0";
		else if(res_multi != 0 && res_mod == 0 ) 
			cout << "1";
		else
			cout << PoW(res_mod, res_multi, p);
			
		cout << endl;
	}
	return 0;
}
