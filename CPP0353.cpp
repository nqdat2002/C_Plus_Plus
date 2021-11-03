#include<bits/stdc++.h>
using namespace std;
string Is_Reversible(string str) {
	for (int i = 0; i < str.size(); i ++)
		if (str[i] != str[str.size() - i - 1])
			return "NO";
	return "YES";
}
int main() {
	int t; 
	cin >> t;
	cin.ignore();
	while (t--) {
		string str; 
		cin >> str;
		string res = "";
		for (int i = 0; i < str.size(); i ++) {
			if (tolower(str[i]) <= 'c' && tolower(str[i]) >= 'a')
				res += "2";
			if (tolower(str[i]) <= 'f' && tolower(str[i]) >= 'd')
				res += "3";
			if (tolower(str[i]) <= 'i' && tolower(str[i]) >= 'g')
				res += "4";
			if (tolower(str[i]) <= 'l' && tolower(str[i]) >= 'j')
				res += "5";
			if (tolower(str[i]) <= 'o' && tolower(str[i]) >= 'm')
				res += "6";
			if (tolower(str[i]) <= 's' && tolower(str[i]) >= 'p')
				res += "7";
			if (tolower(str[i]) <= 'v' && tolower(str[i]) >= 't')
				res += "8";
			if (tolower(str[i]) <= 'z' && tolower(str[i]) >= 'w')
				res += "9";
		}
		cout << Is_Reversible(res);
	}
	return 0;
}
