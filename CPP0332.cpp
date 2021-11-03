#include<bits/stdc++.h>
using namespace std; 
int main() { 
	string str; 
	getline(cin, str); 
	string res = ""; 
	stringstream ss; 
	ss << str; 
	string tmp = ""; 
	vector<string> v; 
	while(ss >> tmp) { 
		v.push_back(tmp); 
	} 
	res += v[v.size()-1]; 
	for(int i = 0; i < v.size() - 1 ; i ++) { 
		res += v[i].substr(0, 1); 
	} 
	transform(res.begin(), res.end(), res.begin(), ::tolower); 
	cout << res ;
	cout << "@ptit.edu.vn" ;
	return 0;
}
/*
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
