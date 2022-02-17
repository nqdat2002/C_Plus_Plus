#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> x;
	while(t--){
		string str;
		getline(cin, str);
		for(int i = 0; i < str.length(); i ++)
			str[i] = tolower(str[i]);
		vector<string> arr;
		stringstream ss(str);
		string tmp, res = "";
		while(ss >> tmp) 
			arr.push_back(tmp);
		res += arr[arr.size() - 1];
		for(int i = 0; i< arr.size() - 1; i ++)
			res += arr[i][0];
		if(x[res] == 0) // || x.find(res) == x.end()
			cout << res << "@ptit.edu.vn";
		else 
			cout << res << x[res] + 1 << "@ptit.edu.vn";
		x[res] ++ ;
		cout << endl;
	}
}
