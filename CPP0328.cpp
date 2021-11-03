#include <bits/stdc++.h>
using namespace std;
int div_for_n(string str, int n) {
	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		int sum = 0;
		for (int j = i; j < str.length(); j++) {
			sum = sum * 10 + str[j] - '0';
			sum %= n;
			if (sum == 0)
				cnt++;
		}
	}
	return cnt;
}
int main() {
	int t; 
	cin >> t;
	cin.ignore();
	while(t--) {
		string str; 
		getline(cin, str);
		cout << div_for_n(str, 8) - div_for_n(str, 24);
	}
	return 0;
}
