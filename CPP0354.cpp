#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
		cin >> str;
		vector<int> arr(100);
		for(int i = 0 ; i < 100 ; i ++){
			arr[i] = 1;
		}
		long long cnt = 0;
		for(int i = 0 ; i < str.size() ; i ++){
			for(int j = 0 ; j < str.size() ; j ++){
				if(str[i] == str[j] && i != j && str[i] != '0'){
					str[j] = '0';
					arr[i] ++;
				}
			}
		}
		for(int i = 0; i < str.size() ; i ++){
			if(str[i]!='0'){
				cout << str[i] << arr[i];
			}
		}
		cout << endl;
	}
	return 0;
}

