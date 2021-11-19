#include <bits/stdc++.h>
using namespace std;
bool Binary_Search(vector<int> &a, int n, int k) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == k) 
			return true;
		else if (k > a[m]) 
			l = m + 1;
		else 
			r = m - 1;
	}
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		vector<int> a;
		for(int i = 0; i < n; i ++){
			int c; cin >> c;
			a.push_back(c);
		}
		bool mark = false;
		for(int i = 0; i < n; i ++){
			if(Binary_Search(a, n, x + a[i])){
				mark = true;
				break;
			}
		}
		cout << ((mark) ? 1 : -1) << endl;
	}
	return 0;
}
