#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int to_number(string &x){
	int res = 0, n = x.length();
	for(int i = n - 1; i >= 0; --i){
        res += (int)(x[i] - '0') * pow(10, n - i - 1);
    }
    return res;
}
bool check(string &s){
	int n = s.length(), cnt = 0;
	for(int i = 0; i < n; i++)
		if(s[i] >= '0' && s[i] <= '9')
			cnt ++;
	return (cnt == n && n <= 9) ? true : false; 
}
ll convert(string str){
	stringstream ss(str);
	string tmp;
	ll res = 0;
	while(ss >> tmp){
		if(check(tmp))
			res += (to_number(tmp));
	}
	return res;
}
int main(){
	ifstream input("DATA.in");
    string line;
    ll ans = 0;
    while(!input.eof()){
        getline(input, line);
        ans += convert(line);
        line.clear();
    }
    cout << ans << endl;
	return 0;
}
