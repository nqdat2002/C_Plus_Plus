#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		string str,Key;
		getline(cin,str);
		if (n == 101) 
			 Key = ("A,B,B,A,D,C,C,A,B,D,C,C,A,B,D");
		else
			 Key = ("A,C,C,A,B,C,D,D,B,B,C,D,D,B,B");
		float res = 0 ; 
		for (int i = 0; i < str.length() -1; i += 2)
			if (str.at(i+1) == Key.at(i))
				res += 10 * 1.0/15;
				
		cout << setprecision(2) << fixed << res ;
		cout << endl;
	}
	return 0;
}

