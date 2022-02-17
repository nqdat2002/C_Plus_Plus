#include <bits/stdc++.h>
using namespace std;
int b[100], n, k;
bool Is[100] = {false};
void in(){
	for(int i = 1; i <= n; i ++)
		cout << b[i] ;	
	cout << " ";
}
void Try(int i){
	for(int j = 1; j <= n ; j ++ ){
		if(Is[j] == false){
			Is[j] = true;
			b[i] = j;
			if(i == n) in();
			else Try(i + 1);
			Is[j] = false;
		}	
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n ;
		Try(1);
		cout << endl;
	}
	return 0;
}
