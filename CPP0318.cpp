#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	getchar();
	while(t--){
		string str;
		getline(cin, str);
		if(str[5] == str[6] && str[5] == str[7] && str[5] == str[9] && str[5] == str[10])
			cout << "YES";
		else if((str[5] == str[6] && str[5] == str[7]) && str[9] == str[10])   // 3dau 2 cuoi
			cout << "YES";
		else if((str[5] == 54 || str[5] == 56) && (str[6] == 54 || str[6] == 56)
		&& (str[7] == 54 || str[7] == 56) && (str[9] == 54 || str[9] == 56  )&& (str[10] == 54 || str[10] == 56))
			cout << "YES";
		else if(str[5] < str[6] && str[6] < str[7] && str[7] < str[9] && str[9] < str[10])
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}
