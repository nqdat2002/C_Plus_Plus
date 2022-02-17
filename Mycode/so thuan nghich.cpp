#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){ 	
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		int len=str.length();
		int cnt=0;
		for(int i=0;i<len/2;i++){
			if(str[i]==str[len-1-i])
				cnt++;
		}
		if(cnt==len/2) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
