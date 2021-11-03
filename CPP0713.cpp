#include <bits/stdc++.h>
using namespace std;
int arr[100],n,k,Istrue[100]={};
void output(){
	for(int i = 1; i <= n; i ++){
		cout << arr[i] ;	
	}
	cout << " ";
}
void backtracking(int i){
	for(int j = 1; j <= n ; j ++ ){
		if(Istrue[j] == 0){
			Istrue[j] = 1;
			arr[i] = j;
			if(i == n) output();
			else backtracking(i + 1);
			Istrue[j] = 0;
		}	
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n ;
		backtracking(1);
		cout << endl;
	}
	return 0;
}
