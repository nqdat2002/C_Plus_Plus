#include<bits/stdc++.h>
using namespace std;
void Swap_Number(string str){
	int i = str.length() - 2;
	while(i >= 0 && str[i] <= str[i + 1])
		i --;
	if(i == -1){
		cout << -1; 
		return;
	}
	int j = str.length() - 1;
	while(str[i] <= str[j] || (str[i] > str[j] && str[j] == str[j - 1]))
	   j --;
	swap(str[i], str[j]);
	if(str[0] == '0')
		cout<< -1;
	else 
		cout << str;
} 
int main(){
	int t;
	cin >> t;
	while(t--) {
		string str; 
		cin >> str;
		Swap_Number(str);
		cout << endl;
	}
	return 0;
}
