#include<bits/stdc++.h>
using namespace std;
int A[100][100], tong=0, m, n;

void nhiem(int a, int b){
	if(a>0&&b>0){
		if(A[a-1][b-1]!=-1){
			tong+=A[a-1][b-1];
			A[a-1][b-1]=0;
		}
	}
	if(b>0){
		if(A[a][b-1]!=-1){
			tong+=A[a][b-1];
			A[a][b-1]=0;
		}
	}
	if(a<m-1&&b>0){
		if(A[a+1][b-1]!=-1){
			tong+=A[a+1][b-1];
			A[a+1][b-1]=0;
		}
	}
	if(a<m-1){
		if(A[a+1][b]!=-1){
			tong+=A[a+1][b];
			A[a+1][b]=0;
		}
	}
	if(a<m-1&&b<n-1){
		if(A[a+1][b+1]!=-1){
			tong+=A[a+1][b+1];
			A[a+1][b+1]=0;
		}
	}
	if(b<n-1){
		if(A[a][b+1]!=-1){
			tong+=A[a][b+1];
			A[a][b+1]=0;
		}
	}
	if(a>0&&b<n-1){
		if(A[a-1][b+1]!=-1){
			tong+=A[a-1][b+1];
			A[a-1][b+1]=0;
		}
	}
	if(a>0){
		if(A[a-1][b]!=-1){
			tong+=A[a-1][b];
			A[a-1][b]=0;
		}
	}
}

int main(){
	cin >> m >> n;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> A[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(A[i][j]==-1){
				nhiem(i, j);
			}
		}
	}
	cout << tong;
}
/*
4 4
1 1 0 1
2 -1 4 5
0 0 0 0
1 0 2 1
*/

