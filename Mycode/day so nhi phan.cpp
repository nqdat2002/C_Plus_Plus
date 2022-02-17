#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; cin >> t; 
    while(t--){ 
        int n; cin >> n; 
       	vector<int> a, b;
        for(int i = 0; i < n; i ++){
        	int x; cin >> x;
        	a.push_back(x);
		}
		for(int i = 0; i < n; i ++){
        	int y; cin >> y;
        	b.push_back(y);
		}
        int res = 1, tmp = 0; 
        for(int i = 0; i < n; i ++){ 
                int x = 0, y = 0; 
            for(int j = i; j < n; j ++){ 
                x += a[j]; 
                y += b[j]; 
                if(x == y) 
                    tmp = j - i + 1; 
            }
            res = max(res, tmp); 
        } 
        cout << res << endl; 
    }
    return 0;
}
