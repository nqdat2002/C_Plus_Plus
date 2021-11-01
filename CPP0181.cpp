#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin >> t; 
	while(t--) { 
		long long int a, x, y; 
		cin >> a >> x >> y; 
		long long int tmp = __gcd(x,y); 
		for (long long int i = 0; i < tmp ; i++) { 
			cout << a;
		} 
		cout << endl; 
	}
	return 0;
}
