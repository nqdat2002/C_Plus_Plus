#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream input("DATA.in");
    string line;
    map<int, int> mp;
    while(!input.eof()){
        getline(input, line);
        stringstream ss(line);
        string x;
        while(ss >> x){
            mp[stoi(x)] ++;
        }
    }
	for(auto it: mp){
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}
