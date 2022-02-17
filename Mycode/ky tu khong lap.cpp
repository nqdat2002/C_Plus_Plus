#include <bits/stdc++.h>
using namespace std;
void Solve(){
	string str; getline(cin, str);
	int cnt;
	for (int i = 0; i < str.size() ; i++) {
		cnt = 0;
		for (int j = 0; j < str.size() ; j++)
			if (str[i] == str[j])
				cnt ++;
		if (cnt == 1) 
			cout << str[i];
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		Solve();
	}
	return 0;
}




