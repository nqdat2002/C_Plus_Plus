#include <bits/stdc++.h>
using namespace std;
string Add(string a, string b){
	string res = "";
	int tmp = 0;
	while(a.size() < b.size()) 
		a= "0" + a;
	while(a.size() > b.size()) 
		b= "0" + b;
	bool Isbigger = false;
	if(a < b){
		a.swap(b);
		Isbigger = true;
	}
	int len = a.size()-1;
	for(int i = len ; i >= 0 ; i--){
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
	ios::sync_with_stdio(0); 
    cin.tie(0);              
    cout.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a,b;
		cin >> a >> b;
		cout << Add(a, b) << endl;
	}
	return 0;
}
