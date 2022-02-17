#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve(){
	ll n; cin >> n;
	int cnt = 0;
	for(ll i = 1; i < sqrt(n); i ++){
		if(n % i == 0){
			if(i % 2 == 0) 
				cnt ++;
			if((n / i) % 2 == 0) 
				cnt ++;
		}
	}
	if(n / (long)(sqrt(n)) == sqrt(n)){
		if(n / (long)(sqrt(n)) % 2 == 0)
			cnt ++;
	}
	cout << cnt << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		Solve();
	}
	return 0;
}

