#include<bits/stdc++.h>
using namespace std;
bool Sum_string(string a, string b) {
	string ab = a.append(b);
	string ba = b.append(a);
	if (ab > ba)
		return true;
	return false;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector< string > str(n);
		for (int i = 0 ; i < n ; i ++)
			cin >> str[i];
		sort(str.begin(), str.end(), Sum_string);
		for (int i = 0 ; i < n ; i ++)
			cout << str[i];
		cout << endl;
	}
	return 0;
}
