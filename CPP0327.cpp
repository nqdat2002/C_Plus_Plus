#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; 
	cin >> t;
    while (t--) {
        string str; 
		cin >> str;
        int res = 0;
        for (int i = 0 ; i < str.length() ; i++) 
            res = (2 * res + str[i] - 48) %5;
        if (res % 5 == 0)
        
			cout << "Yes\n";
        else 
			cout << "No\n";
    }
    return 0;
}

