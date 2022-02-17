#include <iostream>
#include <string>
using namespace std;
int main() {
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string s; cin >> s;
		string str_so = "0123456789";
		int a = 0, b = 0;
		for(int i = 0 ; i < 10 ; i ++) {
			for(int j = 0 ; j < s.size() ; j ++) {
				if(s[j] < '0' || s[j] > '9')
					b ++;
				if(str_so[i] == s[j]) {
					a ++;
					break;	
				}
			}
		}
		if(b != 0 || s[0] == '0')
			cout << "INVALID\n";
		else if(a == 10 && a >= 9)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}


