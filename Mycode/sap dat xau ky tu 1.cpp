#include <bits/stdc++.h>
using namespace std;
void Solve(){
	string str; getline(cin, str);
	int arr[500] = {0};
	int res = 0;
	for(int i = 0; i < str.length(); i ++){
		arr[str[i]] ++;
		if(res < arr[str[i]])
			res = arr[str[i]];
	}
	if(res <= str.length() - res && str.length() % 2 == 0)
		cout << 1 << endl;
	else if(res <= (str.length() / 2 + 1) && str.length() % 2 == 1)
		cout << 1 << endl;
	else 
		cout << 0 << endl;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--) {
		Solve();
	}
	return 0;
}
