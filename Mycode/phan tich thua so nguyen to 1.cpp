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
	int T; cin >> T;
	while(T--){
		int n, i, j; cin >> n;
		if(n == 1) 
			cout << "1 1";
		else{
			i = 2;j = 0;
			while(i <= n){
				if(n % i == 0){
					n = n / i;
					j ++;
					if(j == 1)
						cout << i << " " ;
				}
				if(n % i != 0){
					if(j > 0) 
						cout << j << " " ;
					i ++;
					j = 0;
				}
			}
		}
		cout << '\n';
	}
	return 0;	
}

