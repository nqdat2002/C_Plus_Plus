#include<bits/stdc++.h>
using namespace std;
int main () {
	int t,i; 
	cin >> t;
	getchar();
	while (t--){
		string str;
		getline(cin, str);
		str[str.length()] = 32;	
		int b = 0, c = 0;	
	   	for (i = 0 ; i < str.length() ; i ++){ 
		    if (str[i] != 32 && str[i + 1] == 32) {
				if (str[i] % 2 == 0) 
					c++;
				b++; 
			}
		}
	    if ( b % 2 == 0 && b - c < c){
			cout << "YES" << endl;
			continue;
		}
	   	if ( b % 2 != 0 && b - c > c) {
			cout << "YES" << endl;
			continue;
		}
    	cout << "NO" << endl;
	}
	return 0;
}
