#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		if(str[str.length()-1]=='6'&&str[str.length()-2]=='8') 
			cout << "1";
		else 
			cout << "0";
		cout << endl;
	}
	return 0;
}
