#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		char x;
		cin >> x;
		if(x>='A' && x<='Z') printf("%c",x+32);
		else if(x>='a' && x<='z') printf("%c",x-32);
		cout << endl;
	}
	return 0;
}
	
