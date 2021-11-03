#include <bits/stdc++.h>
#define present(t, x) (t.find(x) != t.end())
using namespace std;
void L(string &s){
	int x = s.length();
	for(int i = 0; i < x; i ++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
}
set<string> convert(string str){
	stringstream ss(str);
	string tmp;
	set<string> res;
	while(ss >> tmp){
		res.insert(tmp);
	}
	return res;
}
int main(){
	ifstream input("VANBAN.in");
    string line;
    string str = "";
    while(!input.eof()){
        getline(input, line);
        L(line);
        str = str + line;
        str = str + " ";
    }
	set<string> s3 = convert(str);
	for(string x: s3)  
		cout << x << endl;
	return 0;
}