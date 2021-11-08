#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b) {
	string ab = a.append(b);
	string ba = b.append(a);
	return ((ab > ba) ? true : false);
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector< string > str(n);
		for (int i = 0 ; i < n ; i ++) cin >> str[i];
		sort(str.begin(), str.end(), cmp);
		for (auto x : str) cout << x;
		cout << endl;
	}
	return 0;
}
