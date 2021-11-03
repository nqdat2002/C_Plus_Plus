#include <bits/stdc++.h>
using namespace std;
string Add(string a, string b){
	string res ="";
	int tmp=0;
	while(a.size() < b.size()) 
		a= "0"+a;
	while(a.size() > b.size()) 
		b= "0"+b;
	int len = a.size()-1;
	for(int i = len ; i >= 0 ; i--){
		
		int number = int(a[i] - '0') + int(b[i] - '0') + tmp;
		res = char(number % 10 + '0') + res;
		tmp = number / 10;
	
	}
	if(tmp > 0) 
		res = char(tmp + '0') + res;
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
		cout << Add(a,b);
	}
	return 0;
}
