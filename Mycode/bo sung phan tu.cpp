#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())

typedef long long ll;
const ll mod = 1e9 + 7;
// Author: Nguyen Quoc Dat
// Code: B20DCPT053
// Organization: PTIT
// Date:
// Program:
// -------------------  Your code STARTS here !!!---------------------------
bool Binary_Search(vector<int> a, int n, int k) {
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
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a;
		for (int i = 0; i < n; i++){
			int x; cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		int cnt = 0;
		for (int i = a[0]; i <= a[n - 1]; i++)
			if (!Binary_Search(a, n, i))
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}
