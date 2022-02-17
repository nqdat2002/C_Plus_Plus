#include <bits/stdc++.h>
using namespace std;
stack<string> convert(string s){
	stringstream ss(s);
	stack<string> stk;
	string t;
	while(ss >> t){
		stk.push(t);
	}
	return stk;
}
void Solve(){
	string str; getline(cin, str);
	stack<string> s = convert(str);
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}
int main(){
	int t; cin >> t; cin.ignore();
	while (t--) {
		Solve();
	}
	return 0;
}
