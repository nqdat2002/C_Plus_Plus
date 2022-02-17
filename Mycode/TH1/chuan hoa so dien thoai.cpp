#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		int n = s.size();
		string res = "";
		for(int i = 0; i < n; i ++){
			if(s[i] >= '0' && s[i] <= '9')
				res = res + s[i];
		}
		if(res.substr(0, 2) == "84"){
			res.erase(res.begin() + 0, res.begin() + 2);
			res.insert(0, "0");
		}
		cout << res << endl;
	}
	return 0;
}
