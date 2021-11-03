#include<bits/stdc++.h>
using namespace std;
int Finding_number(vector<int> arr, int n, int k) {
    int cnt = 0;
    for (int i = 0 ; i < n ; i ++) {
        if (arr[i] <= k)
			cnt ++;
    }
    
    int cnt2 = 0;
    for (int i = 0 ; i < cnt ; i ++)
        if (arr[i] > k) 
		cnt2 ++;
		
    int res = cnt2;
    for (int i = 0, j = cnt ; j < n ; i ++, j ++) {
        if (arr[i] > k)
			cnt2 --;
        if (arr[j] > k)
			cnt2 ++;
        res = min(res, cnt2);
    }
    return res;
}
int main(){
    int t, n, k;
	cin >> t;
    while (t--) {
		cin >> n >> k;
        vector<int> arr(n);
        
        for (int i = 0 ; i < n ; i ++)
			cin >> arr[i];
			
        cout << Finding_number(arr, n, k) << endl;
    }
    return 0;
}
