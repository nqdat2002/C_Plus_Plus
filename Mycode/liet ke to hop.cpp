#include <bits/stdc++.h>
using namespace std;
int b[100], n, k;
void in(){
	for(int i = 1; i <= k; i ++){
		cout << b[i] ;	
	}
	cout << " ";
}
void Try(int i){
	for(int j = b[i - 1] + 1; j <= n - k + i ; j ++ ){
		b[i] = j;
		if(i == k) 
			in();
		else 
			Try(i + 1);
	}
}
int main(){
	int T; 
	cin >> T;
	while(T--){
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
	return 0;
}
