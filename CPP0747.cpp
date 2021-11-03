#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
	    int zero = 0, ans = 0;
	    cin >> str;
	    for (int i = str.size() - 1; i >= 0; i--) {
		    zero += (str[i] == '0' ? 1 : 0);
		    if (str[i] == '1') {
		        if (zero > 1) {
		        	ans += 3;
		        	zero -= 2;
		        }
		    }
	    }
	    cout << ans << endl;
	}
	return 0;
}

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
	while(t--){
		std::string str;
		getline(std::cin,str);
		int x = str.length();
		delete_str(str, "100");
		std::cout << x - str.length() ;
		std::cout << std::endl;
	}
    return 0;
}

