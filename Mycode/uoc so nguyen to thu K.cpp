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

bool Prime(int n) {
	if (n < 2)	
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % 2 == 0)
			return false;
	return true;
}
int Is_Prime_of_K(int n, int k){
	int i = 2, cnt = 0;
	while (i <= n) {
		while (Prime(i) && n % i == 0) {
			cnt ++;
			if (cnt == k)
				return i;
			n /= i;
		}
		i++;
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		cout << Is_Prime_of_K(n, k) << endl;
	}
	return 0;
}

