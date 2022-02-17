#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; cin >> t; cin.ignore();
    while(t--){
    	string s; getline(cin, s);
        int dem = 0;
    	for (int i = 0; i < s.size(); i++) 
       	 if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
         	   dem ++;
    	cout << dem + 1 << '\n';
    }
    return 0;
}

