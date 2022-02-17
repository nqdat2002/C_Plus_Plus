#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--) {
    	string s; cin >> s;
    	int key = 0;
    	for(int i = 0; i < s.size(); i ++) 
      		key = (2 * key + s[i] - '0') % 5;
    	if(key % 5 == 0)
			cout << "Yes\n";
   	 	else 
			cout << "No\n";
    }
    return 0;
}
