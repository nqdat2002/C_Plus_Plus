#include <bits/stdc++.h>
using namespace std;
int n,m,k;
void Solve(){
	cin >> n >> m >> k;
	long long a[n], b[m], c[k];
	int i = 0, j = 0, l = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	for(int i = 0; i < k; i++) cin >> c[i];
	vector<long long> res;
	while(i < n && j < m && l < k){
		if(a[i] == b[j] && b[j] == c[l]){
			res.push_back(a[i]);
			++ i;
			++ j;
			++ l;
		}
		else if(a[i] <= b[j] && a[i] <= c[l]){
			++ i;
		}
		else if(b[j] <= a[i] && b[j] <= c[l]){
			++ j;
		}
		else
			++ l;
	}
	if(res.size() == 0){
		cout << -1 << endl;
		return;
	}
	for(int i = 0; i < res.size(); i++) 
		cout <<  res[i] << " ";
}
 
int main(){
	int t; 
	cin >> t;
	while(t --){
		Solve();
		cout << endl;
	}
	return 0;
}

