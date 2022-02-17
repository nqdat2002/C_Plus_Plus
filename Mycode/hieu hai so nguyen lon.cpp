#include <bits/stdc++.h>
using namespace std;
string Subtraction(string a, string b){
	string res = "";
	int tmp = 0;
	while(a.size() < b.size()) a= "0" + a;
	while(a.size() > b.size()) b= "0" + b;
	if(a < b) swap(a, b);
	int len = a.size() - 1;
	for(int i = len; i >= 0; i--){
		int number = int(a[i] - '0') - int(b[i] - '0') - tmp;
		if(number < 0){
			res = char(number + 10 + '0') + res;
			tmp = 1;
		}
		else {
			res = char(number + '0') + res;
			tmp = 0;
		}
	}
	return res;	
}
int main(){
	int t; cin >> t;
	while(t--){
		string a, b; cin >> a >> b;
		cout << Subtraction(a, b) << endl;
	}
	return 0;
}
