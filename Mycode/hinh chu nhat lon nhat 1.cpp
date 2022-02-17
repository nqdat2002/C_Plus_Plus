#include <bits/stdc++.h>
using namespace std;
int R, C;
int a[20][20];
int maxArea(int a[][20], int R, int C){
    int b[R + 1][C + 1];
    for (int i = 0; i < C; i++) {
	    b[0][i] = a[0][i];
        for (int j = 1; j < R; j++)
            b[j][i] = (a[j][i] == 0) ? 0 : b[j - 1][i] + 1;
    }
    for (int i = 0; i < R; i++) {
        int c[R + 1] = { 0 };
        for (int j = 0; j < C; j++)
            c[b[i][j]]++;
        int cnt = 0;
        for (int j = R; j >= 0; j--) {
            if (c[j] > 0) {
                for (int k = 0; k < c[j]; k++) {
                    b[i][cnt] = j;
                    cnt++;
                }
            }
        }
    }
 
    int t, res = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            t = (j + 1) * b[i][j];
            if (t > res)
                res = t;
        }
    }
    return res;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> R >> C;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                cin >> a[i][j];
            }
        }
        cout << maxArea(a, R, C) << endl;
    }
    return 0;
}