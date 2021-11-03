#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, K;
	cin >> t;
	cin.ignore();
	while (t--) {
		string str; 
		cin >> str;
		cin >> K;
		int res = 0;
		for (int i = 0; i <= str.length() - K; i++) {
			int arr[1005] = {0};
			int cnt = 0;
			for (int j = i; j < str.length(); j++) {
				if (arr[str[j]] == 0)
					cnt ++;
				arr[str[j]] ++;
				if (cnt == K) 
					res++;
				if (cnt > K)
					break;
			}
		}
		cout << res << endl;
	}
	return 0;
}
