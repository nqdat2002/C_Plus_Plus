#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		string cmp = "ABCDEFGHIJ";
		string c = "", res = "";
		for(int i = 0; i < b.size(); i ++)
			if(isupper(b[i]))
				c += b[i];
		for(int i = 0; i < c.size(); i ++){
			for(int j = 0; j < cmp.size(); j ++){
				if(c[i] == cmp[j] || c[i] == cmp[j] + 10)
					res += to_string((c[i] - 'A') % 10);
			}
		}
		if(res == a)
			cout << "YES";
		else 
			cout << "NO";
		cout << endl;
	}
}
// 0-A    0-K
// 1-B	  1-L
// 2-C	  2-M
// 3-D	  3-N
// 4-E	  4-O
// 5-F	  5-P
// 6-G    6-Q
// 7-H    7-R
// 8-I	  8-S
// 9-J	  9-T
// 1234 234DFAA4592 -> 3500
// 1234 234BC2DE4592 -> 1234
// 126152 35345AGDGKG -> 063606