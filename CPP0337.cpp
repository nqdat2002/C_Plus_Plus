#include <bits/stdc++.h>
using namespace std;
void Solve(){
	string str; 
	cin >> str;
	map<char, int > m;
	for(char x : str){
		m[x]++;
	}
	int len = int((m).size());
	int cnt = 0 , left = 0, res = INT_MAX;
	int dem[256] = {0};
	for(int i = 0; i < str.length();i++){
		dem[str[i]]++;
		if(dem[str[i]] == 1) 
			cnt ++;
		if(cnt == len){
			while(dem[str[left]] > 1 ){
				dem[str[left]] --;
				++ left;
			}
			if(i - left + 1 < res){
				res = i - left + 1;
			}
		}
	}
	cout << res;
	cout << endl;
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		Solve();
	}
}
