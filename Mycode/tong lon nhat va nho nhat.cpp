#include <iostream>
using namespace std;
string Add(string a, string b) {
	string ans = "";
	int nho = 0;
	while(a.size() < b.size()) 
		a = "0" + a;
	while(a.size() > b.size()) 
		b = "0" + b;
	int len = a.size() - 1;
	for(int i = len; i >= 0; i--){
		int so = int(a[i] - 48) + int(b[i] - '0') + nho;
		ans = char(so % 10 + 48) + ans;
		nho = so / 10;
	}
	if(nho > 0) 
		ans = char(nho + 48) + ans;
	while(ans[0] == 48) 
		ans.erase(ans.begin());
	return ans;
}
string chuyen5(string x) {
	for(int i = 0; i < x.size(); i++)
		if(x[i] == '5') 
			x[i] = '6';
	return x;
}
string chuyen6(string x) {
	for(int i = 0 ; i < x.size(); i++)
		if(x[i] == '6') 
			x[i] = '5';
	return x;
}
int main() { 
	int T; cin >> T; cin.ignore();
	while(T--) { 
		string a, b;
		cin >> a >> b;
		cout << Add(chuyen6(b), chuyen6(a)) << " " << Add(chuyen5(a), chuyen5(b)) << endl;
	} 
	return 0;
}
