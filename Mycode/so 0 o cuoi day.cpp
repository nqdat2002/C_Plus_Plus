#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long int a[n];
		int dem = 0;
		for(int i = 1; i <= n; i ++) cin >> a[i];
		for(int i = 1; i <= n; i ++){
			if(a[i] != 0) 
				cout << a[i] << " ";
			else{
				dem ++;
			}
		}
		for(int i = 1; i <= dem; i ++)
			cout << 0 << " ";
		cout << endl;
	}
	return 0;
}

