#include <bits/stdc++.h>
using namespace std;
int Sum_number(int n){
	int res = 0;
	while(n > 0){
		res += n % 10;
		n/=10;
	}
	return res;
}
int Sum_string( string str ){
	int sum=0;
	for(int i = 0 ; i < str.length() ; i++){
		sum += str[i] - '0'; 
	}
	if(sum == 9)
		return 1;
	while(sum >= 9){
		if(Sum_number(sum) == 9)
			return 1;
		sum = Sum_number(sum);
	}
	return 0;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
		cin >> str;
		if(Sum_string(str))
			cout << "1";
		else 
			cout << "0";
		cout << endl;
	}
	return 0;
}

