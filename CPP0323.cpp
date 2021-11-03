#include<bits/stdc++.h>
using namespace std; 
int main(){ 
	int t;
	cin >> t; 
	cin.ignore();
	while(t--) { 
		string N; 
		long long M,K = 0; 
		cin >> N >> M; 
		int str[1000]; 
		int len = N.size(); 
		for(int i = 0 ; i <= len - 1; i ++){
			str[i] = N[i] - '0';
		} 
		for(int i = 0 ; i <= len - 1; i ++){ 
			K = ( K * 10 + str[i] ) % M; 
		} 
		cout << K << endl; 
	} 
	return 0;
}
