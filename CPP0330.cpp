#include <bits/stdc++.h>
using namespace std;
string Solve(string s){
	int cnt[10] = {0};
	int dem_le = 0, dem = 0, idx_le = -1, max_le = 0;
	for(char x :s)
		cnt[x - '0']++;
	for(int i = 0; i < 10; i ++){
		if(cnt[i]) ++ dem;
		if(cnt[i] % 2 == 1){
			++dem_le;
			if(cnt[i] >= max_le){
				max_le = cnt[i];
				idx_le = i;
			}
		}
	}
	if(dem_le == dem){
		int pos, x = 0;
		for(int i = 1; i <= 9; i ++){
			if(cnt[i] >= x){
				x = cnt[i];
				pos = i;
			}
		}
		string res = string(cnt[pos], pos + '0');
		return res;
	}
	string res = "";
	for(int i = 9; i >= 0; i--){
		if(cnt[i] % 2 == 0){
			res += string(cnt[i] / 2, '0' + i);
		}
	}
	if(res[0] == '0') res = "";
	string tmp = res;
	reverse(res.begin(), res.end());
	if(idx_le != -1){
		tmp = tmp + string(cnt[idx_le], '0' + idx_le) + res;
		return tmp;
	}
	else{
		tmp = tmp + res;
		return tmp;
	}
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string str; cin >> str;
		cout << Solve(str) << endl;
	}
 	return 0;
}
