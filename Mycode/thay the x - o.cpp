#include <bits/stdc++.h>
using namespace std;
char a[20][20];
int n, m;
pair<int,int> path[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
void Move(int i, int j){
	a[i][j] = 'x';
	for(int k = 0; k < 4; k++){
		int g = i + path[k].first;
		int h = j + path[k].second;
		if(g >=1 && g <= n && h >=1 && h <= m && a[g][h] == 'O')
			Move(g, h);
	}
}
void Solve(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> a[i][j];
	for(int i = 1; i <= n; i++){
		if(a[i][1] == 'O') 
			Move(i, 1);
		if(a[i][m] == 'O') 
			Move(i, m);
	}
	for(int i = 1; i <=m; i++){
		if(a[1][i] == 'O') 
			Move(1, i);
		if(a[n][i] == 'O') 
			Move(n, i);
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] != 'x')
				cout << "X ";
			else 
				cout << "O ";
		}
		cout << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		Solve();
	}
	return 0;
}