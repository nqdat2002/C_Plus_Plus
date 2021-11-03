#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); 
    cin.tie(0);              
    cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,l,i,j;
		int arr[1005],tmp[1005];
		cin >> n;
		for(i=0;i<n;i++){
			cin >> arr[i];
		}
		tmp[0] = 1;
		int max;
		for(i = 1 ; i < n; i ++){
			max = 0;
			for(j = 0 ; j < i; j ++){
				if(arr[i] > arr[j])
					if(tmp[j] > max)
						max = tmp[j];
				
			}
			tmp[i] = max+1;
		}
		int len = 0;
		for(i = 0 ; i < n ; i ++){
			if(tmp[i] > len)
			len = tmp[i];
		}
		cout << len << endl;
	}
	return 0; 
}
/*
#include <bits/stdc++.h>
using namespace std;
int c[1001];
int Count_Array(int a[],int n){
	int temp = 1;
	for(int i = 0; i < n; i ++){
		c[i] = 1;
		for(int j = 0; j < i; j ++){
			if(a[j] < a[i]){
				c[i] = max(c[i], c[j] + 1);
			}
		}
		temp = max(temp, c[i]);
	}
	return temp;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i ++){
			cin >> arr[i];
		}
		cout << Count_Array(arr, n) << endl;
	}
	return 0;
}
*/
