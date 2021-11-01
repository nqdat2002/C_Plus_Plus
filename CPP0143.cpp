#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int fb[100];
	fb[1]=fb[2]=1;
	for(int i=3;i<=92;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fb[n] << endl;
	}
	return 0;
}
