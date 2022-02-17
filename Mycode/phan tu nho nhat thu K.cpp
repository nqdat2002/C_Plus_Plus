#include <bits/stdc++.h>
using namespace std;
void Solve(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cout << a[k - 1] << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
	return 0;
}

