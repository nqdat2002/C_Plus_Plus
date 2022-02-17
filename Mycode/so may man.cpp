#include<bits/stdc++.h>
using namespace std;
#define xau int t; cin >> t; cin.ignore();
#define so int t; cin >> t;
void Solve(){
	string str;
	cin >> str;
	if(str[str.length()-1] == '6' && str[str.length()-2] == '8') 
		cout << "1";
	else 
		cout << "0";
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
	   Solve();
	}
	return 0;
}

