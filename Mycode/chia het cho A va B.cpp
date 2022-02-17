#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--) {
    	int m, n, a, b;
		cin >> m >> n >> a >> b;
    	int counta = 0;
    	for(int i = m; i <= n; i++)
    		if(i % a == 0 || i % b == 0)
    			counta ++;
    	cout << counta << '\n';
    }
    return 0;
}

