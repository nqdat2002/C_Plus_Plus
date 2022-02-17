#include <bits/stdc++.h>
using namespace std;
int main(){
    string a[10001];
    int T, dem = 0;
    cin >> T; cin.ignore();
    for(int i = 0; i < T; i++){
        getline(cin, a[i]);
        bool check = false;
        for(int j = 0; j < i ; j++){
            if(a[i] == a[j]){
                check = true;
                break;
            }
        }
        dem += !check;
    }
    cout << dem;
    return 0;
}

