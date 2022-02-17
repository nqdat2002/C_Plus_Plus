#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		ll s = 0;
		for(int i = 0; i < n - 1; i ++){
			cin >> a[i];
			s += a[i];
		}
		ll res = n * (n + 1) / 2;
		cout << res - s << endl;
	}
	return 0;
}
