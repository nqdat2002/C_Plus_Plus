#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	cin.ignore();
	while(t--){
	    string str, res = "";
	    getline(cin, str);
	    int sum = 0;
	    int n = str.size();
	    for(int i = 0 ; i < n ; i ++){
	        if((int) str[i] >= 48 && (int)str[i] <= 57){
	            sum+= (int)str[i]-  48;
	        }
	        else  res += str[i];
	    }
	    sort(res.begin(), res.end());
	    cout << res << sum << endl;
	}
    return 0;
}
