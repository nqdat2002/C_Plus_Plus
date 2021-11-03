#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		cin.ignore();
		vector<int> arr(n);
		int Number[10] = { 0 };
		for (int i = 0; i < n; i++) {
			string str; 
			cin >> str;
			for (int i = 0; i < str.size(); i++)
				Number[str[i] -'0'] ++;
		}
		for (int i = 0; i < 10; i++){
			if (Number[i]) 
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

