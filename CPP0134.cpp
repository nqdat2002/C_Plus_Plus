#include <iostream>
#include <cmath>
using namespace std;
int Isprime(int n) {
	if (n < 2)	
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % 2 == 0)
			return 0;
	return 1;
}
int Isprime_of_K(int n, int k){
	int i = 2, cnt = 0;
	while (i <= n) {
		while (Isprime(i) && n % i == 0) {
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
	int t; 
	cin >> t;
	while (t--) {
		int n,k; 
		cin >> n >> k;
		cout << Isprime_of_K(n, k) << endl;
	}
	return 0;
}
