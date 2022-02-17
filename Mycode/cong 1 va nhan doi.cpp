#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t, n;
	cin >> t; 
	while(t--){ 
		cin >> n; 
		vector<int> arr(1005); 
		for(int i = 0; i < n; i ++)
			cin >> arr[i]; 
		int mark = 0, res = 0;
		for(int i = 0; i < n; i ++){ 
			int cnt = 0; 
			int tmp = arr[i]; 
			while(tmp > 0){ 
				if(tmp % 2 == 0){ 
					tmp /= 2; 
					cnt ++; 
				} 
				else{
					tmp -= 1; 
					mark ++; 
				} 
			} 
			res = max(res, cnt); 
		} 
		cout << res + mark << endl; 
	} 
	return 0;
}
