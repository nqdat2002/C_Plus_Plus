#include <bits/stdc++.h>
#define present(t, x) (t.find(x) != t.end())
using namespace std;
set<string> convert(string str){
	stringstream ss(str);
	string tmp;
	set<string> res;
	while(ss >> tmp){
		res.insert(tmp);
	}
	return res;
}
void TC(){
	string str, t; 
	getline(cin, str);
	getline(cin, t);
	set<string> s1 = convert(str);
	set<string> s2 = convert(t);
	for(string x : s1){
		if(!present(s2, x)){
			cout << x << " ";
		}
	}
}
int main(){
	int t; 
	cin >> t;
	cin.ignore();
	while(t--){
		TC();
		cout << endl;
	}
	return 0;
}
