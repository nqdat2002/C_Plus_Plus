#include<bits/stdc++.h>
using namespace std;
int Solve(int b, int p){
	long long int res = 0;
	for (long long int i = 1; i < p; i ++){
		if ((i * i) % p == 1){
			long long int tmp = i + p * (b / p);
			if (tmp > b)
				tmp -= p;
			res += ((tmp - i) / p + 1);
		}
	}
	return res;
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int b, p; 
		cin >> b >> p;
		cout << Solve(b, p);
		cout << endl;
	}
	return 0;
}
