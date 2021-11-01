#include <bits/stdc++.h>
using namespace std;
int main(){ 	
	int t;
	cin >> t;
	while (t--) {	
		int n, tmp;
		cin >> n;
		while(n > 0) {
			tmp = n % 10;
			n /= 10;
		}
		if(tmp == 8 || tmp == 6 || tmp == 0) 
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;	
	}	
	return 0;
}
