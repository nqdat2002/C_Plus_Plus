#include <bits/stdc++.h>
using namespace std;
long long int LCM(long long int a, long long int b) {
    return (a*b)/__gcd(a,b);
}
int main () {
    int t;
  	long long int n;
	cin >> t;
    while (t--) {
    	cin >> n;
    	long long int res=1;
    	for (int i = 1; i <= n; i ++) {
    		res = LCM(res, i);
		}
		cout << res << endl;
	}
    return 0;
}
