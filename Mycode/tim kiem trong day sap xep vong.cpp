#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
	int T; cin >> T; 
	while(T--){ 
		int n, x; cin >> n >> x; 
		int a[n + 5];
		for(int i = 1; i <= n; i ++)
			cin >> a[i];
		for(int i = 1; i <= n; i++) 
			if(x == a[i]){
				cout << i << endl;
				break;
			}
	}
	return 0;
}
