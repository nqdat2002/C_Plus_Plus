#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string str;
		getline(cin,str);
		int arr[500]={0};
		int res = 0;
		for(int i = 0; i < str.length(); i ++){
			arr[str[i]] ++;
			if(res < arr[str[i]])
				res = arr[str[i]];
		}
		if(res <= str.length() - res && str.length() % 2 == 0)
			cout << 1;
		else if(res <= (str.length()/2 + 1) && str.length() % 2 == 1)
			cout << 1;
		else 
			cout << 0;
		cout << endl;
	}
	return 0;
}

