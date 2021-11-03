#include<bits/stdc++.h>
using namespace std;
void Finding(vector<int> arr ,int n, int x){
	int mark = 0;
	for(int i = 0 ; i < n ; i ++)
		if(x == arr[i]){
			mark ++;
			cout << i+1;
			break;
		}
	if(mark == 0) cout << "-1";
}
int main(){
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	   	cin >> n >> x;
	   	vector<int> arr(n);
	    int i,j;
	    for(i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    Finding(arr,n,x);
	    cout << endl;
	} 
    return 0;
}
