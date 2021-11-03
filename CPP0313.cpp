#include<iostream>
#include<string>
using namespace std;

int main() {
	string s,a;
	getline(cin,s);
	cin >> a;
	while(1){
		int x = s.find(a);
		if (x == -1) break;
		s.erase(x, a.length()+1);
		}
		cout << s;
	
}
#include <iostream>
#include <string>
void delete_str(std:: string& str, std::string& deletee ) {
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
	std::string str;
	std::string s;
	getline(std::cin,str);
	getline(std::cin,s);
	delete_str( str, s);
	std::cout << str;
    return 0;
}
