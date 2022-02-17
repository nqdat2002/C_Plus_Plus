#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Find_Prime(ll n){ 
	int cnt=0; 
	for(ll i = 2; i <= sqrt(n); i ++){ 
		if(n % i == 0) { 
			cnt ++; 
			cout << i << " "; 
			break; 
		} 
	} 
	if(cnt == 0) cout << n << " "; 
}
int main(){
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		for(ll i = 1; i <= n; i ++){
			Find_Prime(i);
		}
		cout << endl;
	}
	return 0;
}

