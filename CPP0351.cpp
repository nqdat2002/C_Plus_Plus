#include <bits/stdc++.h>
using namespace std;
void vietHoa(string &x){
	x[0] = toupper(x[0]);
	for(int i = 1; i < x.length(); i++){
		x[i] = tolower(x[i]);
	}
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		int x;
		cin >> x;
		cin.ignore();
		string s;
		getline(cin, s);
		stringstream ss(s);
		vector<string> v;
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		if(x == 1){
			vietHoa(v[v.size() - 1]);
			cout << v.back() << " ";
			for(int i = 0; i < v.size() - 1; i++){
				vietHoa(v[i]);
				cout << v[i];
				if(i != v.size() - 2)
					cout << " ";
			}
		}					
		else{
			for(int i = 1; i < v.size(); i++){
				vietHoa(v[i]);
				cout << v[i];
				if(i != v.size() - 1)
					cout << " ";
			}
			vietHoa(v[0]);
			cout << " " << v.front() ;
		}
		cout << endl;
	}
	return 0;
}
 
