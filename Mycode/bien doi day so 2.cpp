#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n], b[n];
		for(int i = 0 ; i < n; i ++)
			cin >> a[i];
		b[0] = a[1] * a[0];
		int k = 1;
		for(int i = 0 ; i < n - 2; i ++) {
			b[k] = a[i] * a[i + 2];
			k ++;
		}
		b[k] = a[n - 1] * a[n - 2];
		for(int i = 0 ; i <= k; i ++)
			cout << b[i] << " " ;
		cout << endl;	
	}
	return 0;
}