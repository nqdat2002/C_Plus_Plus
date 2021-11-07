#include <bits/stdc++.h>
using namespace std;
bool IsPrime( int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i ++)
		if (n % i == 0) 
			return false;
	return true;
}
bool ch(int a, int b){
    if(__gcd(a, b) == 1) 
	    return true;
     else return false;
}
int main(){ 
	int t; cin >> t;
	while(t-- ){
		int n; cin >> n;
		int cnt = 0;
		for (int j = 1 ; j < n ; j++)
			if (ch(n, j)) 
				cnt++;
		if (IsPrime(cnt)) 
			cout << 1 << endl;
		else 
			cout << 0 << endl;
	}
	return 0;
}
