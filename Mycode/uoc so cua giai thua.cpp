#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int m, n; cin >> m >> n;
		int cnt = 0;
		for(int j = n; j <= m; j = j + n){
			int d = j;
			while(d % n == 0){
				cnt ++;
				d /= n;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
