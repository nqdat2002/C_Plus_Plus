#include <iostream>
#include <string> 
using namespace std; 
bool div_11(string str){
	int sum_1 = 0,sum_2 = 0; 
	for(int i = 0; i < str.length(); i++){ 
		if(i % 2 == 0)
			sum_1 += (str[i]-'0'); 
		else
			sum_2 += (str[i]-'0');  
	} 
	int res = sum_1 - sum_2; 
	if(res % 11 == 0) 
		return true; 
	else 
		return false; 
} 
int main(){ 
	int t; 
	cin >> t; 
	while(t--) { 
		string str; 
		cin >> str;
		if(div_11(str)) 
			cout << "1" << endl; 
		else
			cout << "0" << endl; 
	} 
	return 0; 
}
