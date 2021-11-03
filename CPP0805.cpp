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
	ifstream input1("DATA1.txt");
	string line1;
	string s1 = "";
	while(!input1.eof()){
        getline(input1, line1);
        L(line1);
        s1 = s1 + line1;
        s1 = s1 + " ";
    }
    ifstream input2("DATA2.txt");
    string line2;
    string s2 = "";
    while(!input2.eof()){
        getline(input2, line2);
        L(line2);
        s2 = s2 + line2;
        s2 = s2 + " ";
    }
	set<string> res1 = convert(s1 + " " + s2);
	set<string> res2 = convert(s1);
	set<string> res3 = convert(s2);
	for(string x: res1)  
		cout << x << " ";
	cout << endl;
	for(string x : res2){ 
		if(present(res3, x)){
			cout << x << " ";
		}
	}
	return 0;
}
