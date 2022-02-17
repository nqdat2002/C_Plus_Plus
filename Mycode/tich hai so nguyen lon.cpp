#include<bits/stdc++.h>
using namespace std;
#define xau int t; cin >> t; cin.ignore();
#define so int t; cin >> t;
string Multi(string a, string b) {
    string res = "";
    int n = a.length();
    int m = b.length();
    int len = m + n;
    int carry = 0;
    for (int i = len - 1; i >= 0; i--) {
        int tmp = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (i - j <= m && i - j >= 1) {
                int a1 = a[j] - '0';
                int b1 = b[i - j - 1] - '0';
                tmp += a1 * b1;
            }
        }
        tmp += carry;
        carry = tmp / 10;
        res = (char)(tmp % 10 + '0') + res;
    }
    while (res.length() > 1 && res[0] == '0') 
		res.erase(0, 1);
    return res;
}
void Solve(){
	string a, b; cin >> a >> b;
	cout << Multi(a, b) << endl;
}
int main(){
	xau
	while (t--) {
	    Solve();
	}
	return 0;
}
