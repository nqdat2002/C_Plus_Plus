#include <bits/stdc++.h>
using namespace std;
int Div(string s, int n) {
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		int res = 0;
		for (int j = i; j < s.size(); j++) {
			res = res * 10 + s[j] - '0';
			res %= n;
			if (res == 0) cnt++;
		}
	}
	return cnt;
}
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		cout << Div(s, 8) - Div(s, 24) << endl;
	}
	return 0;
}
