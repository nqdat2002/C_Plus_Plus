#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Sum_module(int N, ll K) {
	int sum = 0;
	for (int i = 1 ; i <= N ; i++) 
		sum += i % K;
	if (sum == K)
		return 1;
	return 0;		
}
int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	cout.tie(0);
	int t; 
	cin >> t;
	while (t--) {
		ll N, K;
		cin >> N >> K;
		cout << Sum_module(N, K) ;
		cout << endl;
	}
	return 0;
}
