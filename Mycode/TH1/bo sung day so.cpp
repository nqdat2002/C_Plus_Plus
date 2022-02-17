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
		int n; cin >> n;
		vector<int> a(n);
		int cnt = 0;
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a.begin(), a.end());
		for(int i = a[0]; i <= a[n - 1]; i ++){
			if(Binary_Search(a, n, i) == false)
				cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}