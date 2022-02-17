#include<bits/stdc++.h>
using namespace std;
#define xd cin.ignore();
void Swap_Number(string str){
	int i = str.size() - 2;
	while(i >= 0 && str[i] <= str[i + 1])
		i --;
	if(i == -1){
		cout << -1; 
		return;
	}
	int j = str.size() - 1;
	while(str[i] <= str[j] || (str[i] > str[j] && str[j] == str[j - 1]))
	   j --;
	swap(str[i], str[j]);
	if(str[0] == '0')
		cout << -1;
	else 
		cout << str;
} 
void Solve(){
	string str; cin >> str;
	Swap_Number(str);
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--) {
		Solve();
	}
	return 0;
}
