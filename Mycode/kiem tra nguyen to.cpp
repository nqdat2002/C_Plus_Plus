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
	long long int n;
	cin >> n;
	if(Isprime(n)) cout << "YES";
	else cout << "NO";
	return 0;
}
