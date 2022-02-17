#include <bits/stdc++.h>
using namespace std;
int ROW, COL;
struct Point{
	int x;
	int y;
};
struct queueNode{
	Point pt;
	int dist;
};
bool isValid(int row,int col){
	return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int BFS(int mat[500][500], Point src, Point dest){
	if(!mat[src.x][src.y] || !mat[dest.x][dest.y]) return -1;
	bool visited[ROW][COL];
	memset(visited, false, sizeof(visited));
	visited[src.x][src.y] = true;
	queue<queueNode>q;
	queueNode s = {src, 0};
	q.push(s);
	while(!q.empty()){
		queueNode curr = q.front();
		Point pt = curr.pt;
		if(pt.x == dest.x && pt.y == dest.y) return curr.dist;
		q.pop();
		for(int i = 0; i < 4; i ++){
			int row = pt.x + dx[i];
			int col = pt.y + dy[i];
			if(isValid(row,col) && mat[row][col] && !visited[row][col]){
				visited[row][col] = true;
				queueNode adjcell = {{row, col}, curr.dist + 1};
				q.push(adjcell);
			}
		}
	}
	return -1;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		int x, y, z, t;
		cin >> ROW >> COL >> x >> y >> z >> t;
		int a[500][500];
		for(int i = 0; i < ROW; i ++)
			for(int j = 0; j < COL; j ++) 
				cin >> a[i][j];
		
		Point source = {x, y};
		Point dest = {z, t};
		int res = BFS(a, source, dest);
		cout<< res << endl;
	}
	return 0;
}
