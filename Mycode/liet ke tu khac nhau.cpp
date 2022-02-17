#include <bits/stdc++.h>
#define present(t, x) (t.find(x) != t.end())
using namespace std;
int main(){
	ifstream input("VANBAN.in");
    string line;
    set<string> res;
    while(!input.eof()){
        getline(input, line);
        transform(line.begin(), line.end(), line.begin(), ::tolower);
        stringstream ss(line);
        string x;
        while(ss >> x){
            res.insert(x);
        }
    }
	for(string x: res)  
		cout << x << endl;
	return 0;
}
