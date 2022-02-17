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