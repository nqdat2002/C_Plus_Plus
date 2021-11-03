/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string str;
		getline(cin, str);
		while (1) {
			if (str.find_first_of(" ") == str.find_last_of(" ")) {
				break;
			}
			int p = str.find_last_of(" ");
			cout << str.substr(p + 1, 100) << " ";
			str.erase(p, 100);
		}
		int p = str.find_last_of(" ");
		cout << str.substr(p + 1, 100) << " ";
		str.erase(p, 100);
		cout << str << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
	    stack<string> s;
		string str;getline(cin, str);
		stringstream ss(str);
		string token;
		while(ss >> token){
		    s.push(token);
		}
		while(!s.empty()){
		    cout << s.top() << " ";
		    s.pop();
		}
		cout << endl;
	}
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		vector<string> v;
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		for(int i = v.size() - 1; i >= 0; i --){
				cout << v[i];
				if(i != 0)
					cout << " ";
		}
		cout << endl;
	}
	return 0;
}

