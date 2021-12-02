#include <bits/stdc++.h>
using namespace std;
int main(){ 	
	int i, t; cin >> t;
	for(i=1;i<=t;i++){ 	
		int n, a ,b;
		cin >> n;
		while(n > 0){
			b = n % 10;
			n /= 10;
		}
		if(b == 8 | b == 6||b == 0) cout << "YES" << endl;
		else cout << "NO" << endl;	
	}
	return 0;
}
