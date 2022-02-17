#include <iostream> 
#include <string>
using namespace std; 
int main() {
	int t; cin >> t;
	while(t--) {
		string a; cin >> a;
		int cnt1 = 0, cnt2 = 0;
		for(int i = 0; i < a.length(); i ++)
			if(a[i] % 2 == 0)
				cnt1 ++;
		for(int i = 0; i < a.length() / 2; i ++)
			if(a[i] == a[a.length() - 1 - i])
				cnt2 ++;
		if(cnt1 == a.size() && cnt2 == a.size() / 2) 
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

