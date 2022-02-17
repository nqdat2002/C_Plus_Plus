#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) a.begin(),a.end()

typedef long long ll;
const ll mod = 1e9 + 7;
// Author: Nguyen Quoc Dat
// Code: B20DCPT053
// Organization: PTIT
// Date:
// Program:
// -------------------  Your code STARTS here !!!---------------------------
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int a[100][100], n;
		cin >> n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin >> arr[i][j];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==0 || j==0 || i==n-1 || j==n-1){
					cout << arr[i][j] << " ";
				}
				else cout << "  ";
			}
			cout << endl;
		}
	}
	return 0;
}
