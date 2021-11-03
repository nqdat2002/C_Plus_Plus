#include<bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int> arr, int left, int right, int x) {
  	if (right >= left) {
    	int middle = left + (right - left) / 2; 
    	if (arr[middle] == x)
    		return middle;
    	if (arr[middle] > x)
      		return Binary_Search(arr, left, middle - 1, x);
    	return Binary_Search(arr, middle + 1, right, x);
  	}
  	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		vector<int> arr(n);
		for(int i = 0 ; i < n ; i ++){
			cin >> arr[i];
		}
		if(Binary_Search(arr,0,n-1,x)==-1) 
			cout <<"-1";
		else 
			cout << "1";
		cout << endl;
	}
	return 0;
}
