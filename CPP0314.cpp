#include <iostream>
#include <string>
using namespace std;
int main(){
    string NY[10001];
    int n, cnt = 0;
    cin >> n;
    cin.ignore();
    for(int i  =0; i < n; i++){
        getline(cin, NY[i]);
        bool temp = false;
        for(int j = 0; j < i ; j++){
            if(NY[i] == NY[j]){
                temp =true;
                break;
            }
        }
         cnt += !temp;
    }
    cout << cnt;
    return 0;
}

