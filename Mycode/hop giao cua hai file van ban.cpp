#include <bits/stdc++.h>
#define present(t, x) (t.find(x) != t.end())
using namespace std;
int main(){
	ifstream input1("DATA1.in");
	string line1;
	set<string> res, a, b;
	while(!input1.eof()){
		string x;
        getline(input1, line1);
        transform(line1.begin(), line1.end(), line1.begin(), ::tolower);
        stringstream ss(line1);
        while(ss >> x){
        	res.insert(x);
        	a.insert(x);
		}
    }
    ifstream input2("DATA2.in");
    string line2;
    while(!input2.eof()){
    	string x;
        getline(input2, line2);
        transform(line2.begin(), line2.end(), line2.begin(), ::tolower);
        stringstream ss(line2);
        while(ss >> x){
        	res.insert(x);
        	b.insert(x);
		}
    }
	for(string x: res)  
		cout << x << " ";
	cout << endl;
	for(string x : a){ 
		if(present(b, x)){
			cout << x << " ";
		}
	}
	return 0;
}
