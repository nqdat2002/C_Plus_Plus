#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool Is_Prime(ll n) { 
    if (n < 2) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (ll i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
} 
void Solve(){
	ll m;
	cin >> m;
	for(ll i = 1;i <= sqrt(m); i ++){
		if(Is_Prime(i))	
			cout << i * i << " ";
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		Solve();
	}
	return 0;
}

