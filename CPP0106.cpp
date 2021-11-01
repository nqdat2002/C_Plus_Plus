#include <bits/stdc++.h>
using namespace std;
int main(){ 
	ios::sync_with_stdio(0); 
    cin.tie(0);              
    cout.tie(0);	
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
