#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string s; cin >> s;
		int n; cin >> n;
		int dem = 0;
		vector<int> a(1005);
		for (int i = 'a'; i <= 'z'; i ++)
			a[i] = 0;
		for (int i = 0; i < s.size(); i ++)
			a[s[i]] ++;
		for (int i = 'a'; i <= 'z'; i ++)
			if (a[i] > 0) 
				dem ++;
		if (26 - dem <= n && s.size() >= 26)
			cout <<  1 << '\n';
		else
			cout << 0 << '\n';
	} 
	return 0;
}

