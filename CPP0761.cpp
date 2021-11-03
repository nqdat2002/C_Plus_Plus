#include <bits/stdc++.h>
using namespace std;
long long Div_String_for_Number(string str, long long x){
	long long res = 0;
	for(int i = 0; i < str.length(); i ++){
		res = (res * 10) + str[i] - '0';
		res %= x; 
	}
	return res;
}
int main(){
	int t;
	string a;
	long long b;
	cin >> t;
	while(t--){
		cin >> b;
		cin.ignore();
		cin >> a;
		long long res = Div_String_for_Number(a, b);
		cout << __gcd(res, b);
		cout << endl;
	}
	return 0;
}
