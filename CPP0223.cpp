#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, m, n, row, col;
	cin >> t;
	while(t--){
		cin >> n >> m;
		row = n;
		col = m;
		int arr[1000],a[100][100];
		int k = 0;
	    for(int i = 1 ; i <= n ; i ++){
	    	for(int j =1 ; j <= m ; j ++)
	    		cin >> a[i][j];
	    }
		for(int i = 1 ; i <= col / 2 + 1 ; i ++){
			
			for(int j = i; j <= m ; j ++)
				arr[k ++] = a[i][j];
			
			for(int j = i + 1 ; j <= n ; j ++)
				arr[k ++] = a[j][m];
				
			for(int j = m - 1 ; j >= i ; j--)
				arr[k ++] = a[n][j];
					
			for(int j = n - 1; j > i ; j --)
				arr[k ++] = a[j][i];
			n --;
			m --;
		}
		for(int k = 0 ; k < row * col; k ++)  
			cout << arr[k] << " ";
		cout << endl;
	}
	return 0;
}
