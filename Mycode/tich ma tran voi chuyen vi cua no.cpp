#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    for(int x = 0; x < t; x ++){
        int m, n, p; cin >> n >> m >> p;
        int a[100][100], b[100][100], c[100][100] = {0};
        for(int i = 0; i < n; i ++)
            for(int j = 0; j < m; j ++){
                cin >> a[i][j];
                b[j][i] = a[i][j];
            }
        for(int i = 0; i < m; i ++)
            for(int j = 0; j < p; j ++){
                cin >> b[i][j];
            }
        for(int i = 0; i < n; i ++)
            for(int j = 0; j < p; j ++)
                for(int k = 0; k < m; k ++)
                    c[i][j] += a[i][k] * b[k][j];
                    
        cout << "Test " << x + 1 << ":\n";
        
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < n; j ++)
                cout << c[i][j] << " ";
                
            cout << endl;
        }
    }
    return 0;
}
