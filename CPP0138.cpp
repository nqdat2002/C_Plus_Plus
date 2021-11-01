#include <bits/stdc++.h>
using namespace std;
const int nmax=3001;
struct so {
    int a, b;
};
bool IsPrime(int n) {
	if(n<2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n, sum = 0;
	    cin >> n;
	    for (long long i = 2; i <= n; i++) {
	        if (IsPrime(i) && IsPrime(n - i)) {
	            cout << i << " " << n - i << endl;
	            break;
	        }
	    }
	}
	return 0;		
}

