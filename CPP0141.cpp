#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	long long int fibo[100];
	fibo[1]=0;
	fibo[2]=1;
	for(int i=3;i<=92;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		int mark=0;
		for(int i=1;i<=92;i++){
			if(n == fibo[i]){
				cout << "YES" << endl;
				mark++;
				break;
			}
		}
		if(mark==0) cout << "NO" << endl;
	}
	return 0;
}
