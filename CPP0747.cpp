#include <iostream>
#include <string>
void delete_str(std:: string& str,const std::string& deletee ) {
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
	getchar();
	while(t--){
		std::string str;
		getline(std::cin,str);
		int x = str.length();
		delete_str(str, "100");
		if(x == str.length()) std:: cout << ""; 
		else std::cout << x - str.length() ;
		std::cout << std::endl;
	}
    return 0;
}
