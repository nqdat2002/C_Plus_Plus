#include <bits/stdc++.h>
using namespace std; 
/*
// solve 1:
string Solve(string str){
	string res = "", tmp = "";
	stringstream ss; 
	ss << str; 
	vector<string> v; 
	while(ss >> tmp) { 
		v.push_back(tmp); 
	} 
	res += v[v.size() - 1]; 
	for(int i = 0; i < v.size() - 1 ; i ++) { 
		res += v[i].substr(0, 1); 
	} 
	transform(res.begin(), res.end(), res.begin(), ::tolower); 
	return res + "@ptit.edu.vn";
}
int main() { 
	string str; getline(cin, str); 
	cout << Solve(str) << endl;
	return 0;
}

*/


/*
// Solve 2:
int main(){
	string name;
	getline(cin, name);
	int a = name.find_last_of(" ");
	string str = name.substr(a + 1, 100);
	name.erase(a, 100);
	for (int i = 0; i < str.length(); i++) {
		str.at(i) = tolower(str.at(i)); 
		cout << str.at(i);
	}
	for (int i = 0; i < name.length(); i++)
		if (i == 0 || name[i - 1] == ' ') {
			name.at(i) = tolower(name.at(i)); 
			cout << name.at(i);
		}
	cout << "@ptit.edu.vn";
	return 0;
}


*/
// Solve 3
void To_Lower(string &x){
	int n = x.size();
	for(int i = 0; i < n; i ++)
		x[i] = tolower(x[i]);
}
int main(){
	string name;
	getline(cin, name);
	stringstream ss(name);
	string tmp;
	vector<string> v;j
	while(ss >> tmp){
		To_Lower(tmp);
		v.push_back(tmp);
	}
	string res = "";
	res = res + v.back();
	for(int i = 0; i < v.size() - 1; i ++){
		res = res + v[i][0];
	}
	res = res + "@ptit.edu.vn";
	cout << res << endl;
}