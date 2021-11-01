/*
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string Str,s="084";
        cin >> Str;
        int a,i,j,b=0;
        for(i=0; i < Str.length(); i++) {
            a=0;
            for(j = i; j < i + s.length(); j ++) {
                if(Str[j] == s[j-i])
                    a++;
            }
            if(a==s.length()) {
                for(j = i; j < Str.length(); j ++) {
                    Str[j] = Str[j+s.length()];
                }
                b++;
            }
        }
        for(i = 0; i < Str.length(); i ++) {
            if(i == 0) {
                if(Str[i] == ' ')
                    continue;
            }
            if(Str[i] == ' ' && Str[i+1] == ' ')
                continue;
//            cout << Str;
        }
        cout << Str;
        cout << endl;
    }
    return 0;
}*/
#include<bits/stdc++.h>
void delete_str(std:: string& str, const std::string& deletee ) {
    size_t pos;
    size_t len = deletee.length();
    do {
        pos = str.find( deletee );
        if( pos == std::string::npos )
            break;
        str.erase( pos, len );
    }
    while( true );
}
 
int main() {
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string str;
	    std::cin >> str;
	    delete_str( str, "084");
	    std::cout << str;
	    std::cout << "\n";
	}
	return 0;
}
