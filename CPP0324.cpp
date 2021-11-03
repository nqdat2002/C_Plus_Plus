#include<bits/stdc++.h>
long long n,k,p;
using namespace std;
long long Mul(long long a, long long b, long long p){
	if(b == 0) 
		return 0ll;
	long long tmp = Mul(a, b/2, p);
	if(b & 1) 
		return (tmp * 2 + a) % p;
	return tmp * 2 % p;
}
long long PoW(long long n, long long k, long long p){
	if(k == 0) 
		return 1;
	if(k == 1) 
		return n % p;
	long long tmp = PoW(n, k/2, p);
	long long a = Mul(tmp, tmp, p);
	if(k & 1) 
		return a * n % p;
	return a % p;
} 
int main(){ 
	int t;
	cin >> t; 
	cin.ignore();
	while(t--) { 
		string str; 
		long long Mod, b, res = 0; 
		cin >> str >> b >> Mod; 
		vector<int> arr(1005); 
		int len = str.size(); 
		for(int i = 0 ; i < len; i ++){
			arr[i] = str[i] - '0';
		} 
		for(int i = 0 ; i < len ; i ++){ 
			res = (res * 10 + arr[i]) % Mod; 
		}
		cout << PoW(res, b, Mod) << endl; 
	} 
	return 0;
}
