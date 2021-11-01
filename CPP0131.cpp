#include<bits/stdc++.h>
using namespace std;
void Find_Prime(long long n){ 
	long long cnt=0; 
	for(int i = 2 ; i <= sqrt(n) ; i ++){ 
		if(n%i == 0) { 
			cnt ++; 
			cout << i << " "; 
			break; 
		} 
	} 
	if(cnt==0) 
		cout << n << " "; 
}
int main(){
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		for(int i=1;i<=n;i++){
			Find_Prime(i);
		}
		cout << endl;
	}
	return 0;
	
}
