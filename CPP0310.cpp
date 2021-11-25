#include<bits/stdc++.h>
using namespace std;
string AddBig_number(string a, string b) {
	string res ="";
	int tmp=0;
	while(a.size() < b.size()) 
		a= "0" + a;
	while(a.size() > b.size()) 
		b= "0" + b;
	int len = a.size() - 1;
	for(int i = len ; i >= 0 ; i--){
		int number = int(a[i] - '0') + int(b[i] - '0') + tmp;
		res = char(number % 10 + '0') + res;
		tmp = number / 10;
	}
	if(tmp > 0) 
		res = char(tmp + '0') + res;
	while(res[0]=='0') 
		res.erase(res.begin());
	return res;
}
string change(string &a, char &x, char &y) {
	int len = a.size();
	for(int i = 0 ; i < len ; i++){
		if(a[i] == y) 
		a[i] = x;
	}
	return a;
}
int main() { 
	int t;
	cin >> t; 
	cin.ignore();
	while(t--) { 
		string a, b; char x = '5', y = '6';
		cin >> a >> b;
		cout << AddBig_number(change(a, x, y), change(b, x, y)) << " " << AddBig_number(change(a, y, x), change(b, y, x)) << endl;
	} 
	return 0;
}
