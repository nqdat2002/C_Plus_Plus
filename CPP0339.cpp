#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
	cin >> t;
    cin.ignore();
    while (t--) {
        string str; 
		getline(cin, str);
        int cnt = 0;
        for (int i = 0; i < str.size() ; i++) {
            for (int j = i ; j < str.size() ; j++) {
                if (str[i] == str[j])
                    cnt ++;
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}
