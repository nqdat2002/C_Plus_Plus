#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, arr[21]={0};
void Binary(int i){
    for(int j=0;j<=1;j++){
        arr[i]=j;
        if(i==n){
            for(int k=1;k<=n;k++) 
				cout << arr[k];
            cout << " ";
        }
        if(i<n) 
			Binary(i+1);
    }
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);              
    cout.tie(0);
	int t;
	cin >> t;
	while(t--){
	    cin >> n;
	   	Binary(1);
	    cout << endl;
	}
   	return 0;
}
