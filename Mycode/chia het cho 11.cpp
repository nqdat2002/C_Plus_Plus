#include <bits/stdc++.h>
using namespace std; 
bool check(string str){
	int sum_1 = 0, sum_2 = 0;
	for(int i = 0; i < str.size(); i++){ 
		if(i % 2 == 0) 
			sum_1 += (str[i] - '0'); 
		else 
			sum_2 += (str[i] - '0');  
	} 
	if((sum_1 - sum_2) % 11 == 0) 
		return true; 
	else 
		return false; 
} 
int main(){ 
	int t; cin >> t;
	while(t--) { 
		string s; cin >> s;
		if(check(s)) 
			cout << "1\n";
		else 
			cout << "0\n"; 
		cout << endl;
	} 
	return 0; 
}

