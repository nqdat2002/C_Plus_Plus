#include<bits/stdc++.h> 
// ngan xep stack + string
// tham khao Nguyen Nhu Cuong
using namespace std;
int main() { 
	int t; 
	cin >> t; 
	cin.ignore();
	while(t--) { 
		string str; 
		cin >> str; 
		for(int i = 0 ; i <= str.size() ; i ++) {
      		if(str[i] >= 'A' && str[i] <= 'Z')
         		str[i] = str[i] +32;
   		}
		str = 'a' + str; 
		stack <char> stk; 
		long long sum = 0; 
		for(int i = str.size()-1; i >= 0; i --) { 
			if(str[i] >= 'a' && str[i] <= 'z') {
			 	bool check = false; 
				int res = 0; 
				while(!stk.empty()) { 
					check = true; 
					int x = stk.top() - '0'; 
					res = res*10 + x; 
					stk.pop(); 
				} 
				if(check)
					sum += res;
			} 
			else 
				stk.push(str[i]); 
		} 
		cout << sum << endl; 
	} 
	return 0;
}
