#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int n) {
	if(n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main() {
	int t;
	cin >> t;
	while(t --){
	    long long n;
	    int mark = 0;
	    cin >> n;
	    for (long long i = 2; i <= n/2; i++) {
	        if (IsPrime(i) && IsPrime(n - i)) {
	            cout << i << " " << n - i << endl;
	            mark = 1;
	            break;
	        }
	    }
	    if(mark == 0) cout << "-1" << endl;
	}
	return 0;		
}