#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		for (int i = 0; i < str.size() ; i++) {
			int cnt = 0;
			for (int j = 0; j < str.size() ; j++) {
				if (str[i] == str[j])
					cnt++;
			}
			if (cnt == 1)
				cout << str[i];
		}
		cout << endl;
	}
	return 0;
}



