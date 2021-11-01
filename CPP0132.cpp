#include <bits/stdc++.h>
using namespace std;
int Isprime(long long int n) {
	if (n < 2) return 0;
	for (long long int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int main(){
	int t; 
	cin >> t;
	while(t--) {
		long long int n; 
		cin >> n;
		long long int i = 2;
		if (Isprime(n))
			cout << n << endl;
		else {
			while (i <= n) {
				if (n % i == 0 && Isprime(n / i)) {
					cout << n / i << endl;
					break;
				}
				if (n % i == 0 && Isprime(n)) {
					while (1)
						n /= i;
				}
				i++;
			}
		}
	}
	return 0;
}
