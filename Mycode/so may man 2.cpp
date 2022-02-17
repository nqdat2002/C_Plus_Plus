#include <iostream>
using namespace std;
int Sum_number(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
bool Check(string s){
	int sum = 0;
	for(int i = 0 ; i < s.size() ; i++)
		sum += s[i] - '0'; 
	if(sum == 9) 
		return true;
	while(sum >= 9){
		if(Sum_number(sum) == 9)
			return true;
		sum = Sum_number(sum);
	}
	return false;
}
int main(){
	int T; cin >> T;
	while(T--){
	  	string s; cin >> s;
		if(Check(s))
			cout << "1\n";
		else 
			cout << "0\n";
	}
	return 0;
}

