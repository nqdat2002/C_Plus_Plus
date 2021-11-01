#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[100][100];
		for(int i = 1 ; i <= n ; i ++){
			for(int j = 1 ; j <= n ; j ++){
				cin >> arr[i][j];
			}
		}
		for(int i = 1 ; i <= n ; i ++){
			if(i % 2 == 1){
				for(int j = 1 ; j <= n ; j ++){
					cout << arr[i][j] << " ";
				}
			}
			else{
				for(int j = n ; j >= 1 ; j --){
					cout << arr[i][j] << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
