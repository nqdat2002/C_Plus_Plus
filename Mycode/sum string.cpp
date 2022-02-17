#include <bits/stdc++.h>
using namespace std;
int num(char c){
	return c - '0';
}
string Add(string a, string b){
	if(a.size() < b.size()) 
		swap(a, b);
	int len1 = a.size(), len2 = b.size();
	string res ="";
	reverse(a.begin(), a.end()); 
	reverse(b.begin(), b.end());
	b += string(len1 - len2, '0');
	int carry = 0;
	for(int i = 0 ; i < len1 ; i++){
		int tmp = num(a[i]) + num(b[i]) + carry;
		res += (char)('0' + tmp % 10);
		carry = tmp / 10;
	}
	if(carry)
		res += (char)('0' + carry);
	reverse(res.begin(), res.end());
	return res;
}
bool solve(string s, int left, int len1, int len2){
	string s1 = s.substr(left, len1);
	string s2 = s.substr(left + len1, len2);
	string s3 = Add(s1, s2);
	if(s3.size() > s.size() - s1.size() - left - s2.size()) 
		return false;
	if(s.substr(left + len1 + len2, s3.size()) == s3){
		if(left + len1 + len2 + s3.size() == s.size()) 
			return true;
		return solve(s, left + len1, len2, s3.size());
	}
	return false;
}
void Solve(){
	string str; cin >> str;
	int mark = 0;
	for(int i = 1; i< str.size(); i++){
		for(int j = 1 ; j < str.size() - i; j++){
			if(solve(str, 0, i, j)){
				cout << "Yes" << endl;
				mark = 1;
			}
		}
	}
	if(mark == 0)
	    cout << "No" << endl;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		Solve();
	}
	return 0;
}
