#include <iostream>
#include <string>
void Solve(std::string& s, std::string& xoa) {
    size_t pos;
    size_t len = xoa.length();
    do {
        pos = s.find(xoa);
        if( pos == std::string::npos )
            break;
        s.erase(pos, len);
    }
    while(true);
}
int main() {
	std::string xoa, s;
	getline(std::cin, s);
	getline(std::cin, xoa);
	Solve(s, xoa);
	std::cout << s;
    return 0;
}
