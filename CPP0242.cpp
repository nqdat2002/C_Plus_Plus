#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t;
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        int arr1[n+5], arr2[n+5]; 
        for(int i = 0; i < n; i ++) 
            cin >> arr1[i]; 
        for(int i=0;i<n;i++) 
            cin >> arr2[i]; 
        int res = 1, tmp = 0; 
        for(int i = 0; i < n; i ++){ 
                int x = 0, y = 0; 
            for(int j = i; j < n; j ++){ 
                x += arr1[j]; 
                y += arr2[j]; 
                if(x == y) 
                    tmp = j - i + 1; 
            }
            if(tmp > res) 
                res = tmp; 
        } 
        cout << res; 
        cout << endl; 
    }
    return 0;
}
