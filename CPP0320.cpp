#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0); 
    cin.tie(0);              
    cout.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		int i,j,a,b,sum,m;
		string str ,str_so ="0123456789";
		cin >> str;
//		cin.ignore();
		a=0,b=0;
		for(m = 0 ; m < 10 ; m ++) {
			for(j = 0 ; j < str.length() ; j ++) {
				if(str[j] < 48 || str[j] > 57)
					b ++;
				if(str_so[m] == str[j]) {
					a ++;
					break;	
				}
			}
		}
		if(b != 0 || str[0] == '0')
			cout << "INVALID" << endl;
		else if(a == 10 && a >= 9)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

