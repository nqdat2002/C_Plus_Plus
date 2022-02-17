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

// Solution 1:
bool Prime(ll n) {
	if (n < 2) 
		return false;
	for (ll i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		for(ll i = 0; i <= n; i++){
			if(Prime(i))
				cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}


/*
// Solution 2:
bool N[1000000];
void Sang(){
 	for (int i = 2; i <= 1000000; i++){
    	N[i] = true;
  	}
  	for (int i = 2; i <= sqrt(1000000); i++) {
    	if (N[i] == true)
		{
    	 	for (int j = 2 * i; j <= 1000000; j += i) {
     			N[j] = false;
      		}
    	}
  	}
}
void Solve(){
	Sang();
	long long int n;
	cin >> n;
	long long int j = 2;
	while(j <= n){
		if(N[j])
			cout << j << " ";
		j++;
	}
	cout << endl;
}
*/
