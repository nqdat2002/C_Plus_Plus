#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int t; 
	cin >> t;
    cin.ignore();
    while (t--) {
        string str; 
		getline(cin,str);
        int cnt = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
                cnt++;
        }
        cout << cnt + 1 << endl;
    }
}
