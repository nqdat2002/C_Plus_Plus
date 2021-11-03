#include<iostream>
#include<string>
using namespace std;
int main() {
	string name;
	getline(cin, name);
	int a = name.find_last_of(" ");
	string str = name.substr(a + 1, 100);
	name.erase(a, 100);
	int cnt = 0;
	for (int i = 0; i < name.length(); i++){
		cnt++;
		if (name.at(i) != ' ')
			break;
	}
	for (int i = cnt - 1; i < name.length() - 1; i++) {
		if (name.at(i) == ' ' && name.at(i+1) == ' ')
			continue;
		if (i == 0 || name.at(i-1) == ' ') {
			name.at(i) = toupper(name.at(i)); 
			cout << name.at(i);
		}
		else {
			name.at(i) = tolower(name.at(i)); 
			cout << name.at(i);
		}
		
	}
	if (name.at(name.length() - 1) != ' ') {
		name.at(name.length() - 1) = tolower(name.at(name.length() - 1));
		cout << name.at(name.length() - 1);
	}
	cout << "," << " ";
	for (int i = 0; i < str.length(); i++) {
		str.at(i) = toupper(str.at(i)); 
		cout << str.at(i);
	}
	return 0;
}
