/*
#include <iostream>
using namespace std; 
int Solve(long long a) { 
	int tmp = a % 10; 
	long long n = a/10; 
	int i; 
	while(n > 0) { 
		i = n % 10; 
		if(tmp - i != 1 && tmp - i != -1 && tmp - i != 0) 
			return 0; 	
		n /= 10;
	 	tmp = i;
	}
	return 1;
} 
int main() {
	int t; 
	cin >> t;
	while(t--) { 
		long long n; 
		cin >> n; 
		if(Solve(n)) 
			cout << "YES" << endl; 
		else 
			cout << "NO" << endl; 
	} 
	return 0; 
}*/
#include <bits/stdc++.h>
using namespace std;
int Solve(string str){
	int cnt = 0;
	for(int i = 0 ; i < str.size() - 1 ; i ++) {
		if((str[i] - str[i+1]) == 1 || (str[i] - str[i+1] ) == -1)
			cnt ++;
	}
	if(cnt == str.size() - 1) 
		return 1;
	else 
		return 0;
}
int main() {
	int t; 
	cin >> t;
	cin.ignore();
	while(t--) { 
		string str;
		cin >> str; 
		if(Solve(str) == 1) 
			cout << "YES" << endl; 
		else 
			cout << "NO" << endl; 
	} 
	return 0; 
}
