#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, N;
	cin >> t;
	while(t--){
		cin >> N;
		if(N == 2)
			cout << 20;
		if(N == 3)
			cout << 38;
		if(N == 4)
			cout << 50;
		if(N == 5)
			cout << 38;
		if(N == 6)
			cout << 20;
		if(N == 7)
			cout << 8;
		if(N == 8)
			cout << 5;
		if(N == 9)
			cout << 8;	
		cout << endl;
	}
	return 0;
}
