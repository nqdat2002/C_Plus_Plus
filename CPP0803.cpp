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
vector<int> convert(string str){
	stringstream ss(str);
	string tmp;
	vector<int> res;
	while(ss >> tmp){
		res.push_back(C(tmp));
	}
	return res;
}
int main(){
	ifstream input("DATA.in");
    string line;
    string str = "";
    while(!input.eof()){
        getline(input, line);
        str = str + line;
        str = str + " ";
    }
	vector<int> v = convert(str);
	sort(v.begin(), v.end());
	int l = v.size();
	map<int, int> cnt;
	for(int i = 0; i < l; i ++){
		cnt[v[i]] ++;
	}
	for(auto it: cnt){
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}