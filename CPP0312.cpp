#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		int n; 
		cin >> n;
		vector <int> arr(1005);
		for (int i = 'a'; i <= 'z'; i ++)
			arr[i] = 0;
		for (int i = 0; i < str.length(); i ++)
			arr[str[i]]++;
		int cnt = 0;
		for (int i = 'a'; i <= 'z'; i ++)
			if (arr[i] > 0) cnt ++;
		if (26 - cnt <= n && str.length() >= 26)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
