#include <bits/stdc++.h>
#define present(t, x) (t.find(x) != t.end())
using namespace std;
int C(string &x){
	int res = 0, n = x.length();
	for(int i = n - 1; i >= 0; --i){
        res += (int)(x[i] - '0') * pow(10, n - i - 1);
    }
    return res;
}
bool check(string &s){
	int n = s.length();
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(s[i] >= '0' && s[i] <= '9')
			cnt ++;
	}
	if(cnt == n && n <= 9) 
		return true;
	else 
		return false;
}
long convert(string str){
	stringstream ss(str);
	string tmp;
	long res = 0;
	while(ss >> tmp){
		if(check(tmp))
			res = res + (C(tmp));
	}
	return res;
}
int main(){
	ifstream input("DATA.txt");
    string line;
    string str = "";
    while(!input.eof()){
        getline(input, line);
        str = str + line;
        str = str + " ";
    }
	cout << convert(str) << endl;
	return 0;
}