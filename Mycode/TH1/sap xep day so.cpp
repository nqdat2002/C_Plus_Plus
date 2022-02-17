#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector<int> a(n);
		int mx = -1e9;
		int id = 0;
		for(int i = 0; i < n; i ++){
			cin >> a[i];
			if(a[i] > mx){
				mx = a[i];
				id = i;
			}
		}
		a.insert(a.begin() + id, m);
		for(int i = 0; i < a.size(); i ++)
			if(a[i] < 0)
				cout << a[i] << " ";
		for(int i = 0; i < a.size(); i ++)
			if(a[i] >= 0)
				cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}