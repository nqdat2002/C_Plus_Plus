#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n; cin.ignore();
		int N[10] = {0};
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			for (int i = 0; i < s.length(); i++)
				N[s[i] - '0'] ++;
		}
		for (int i = 0; i < 10; i++){
			if (N[i]) 
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}