#include <bits/stdc++.h>
using namespace std;
void tim(int a[] ,int n, int x){
	int mark = 0;
	for(int i = 0 ; i < n ; i ++)
		if(x == a[i]){
			mark ++;
			cout << i + 1 << endl;
			break;
		}
	if(mark == 0) cout << "-1" << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
	    int n, k; cin >> n >> k;
	   	int a[n];
	    for(int i = 0; i < n; i ++)
	        cin >> a[i];
	    tim(a, n, k);
	} 
    return 0;
}
