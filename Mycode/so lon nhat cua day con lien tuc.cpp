#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; cin >> t; 
	while (t --) { 

		/*int n, k; cin >> n >> k; 
		int arr[n]; 
		for(int &x:arr) cin >> x; 
		multiset <int> m; 
		for(int i = 0; i < k; i ++)
			m.insert(arr[i]); 
		for(int i = k; i < n; i ++){ 
			cout << *m.rbegin() << " "; 
			m.erase(m.find(arr[i - k])); 
			m.insert(arr[i]); 
		} 
		cout << *m.rbegin() << endl;*/
		int n, k; cin >> n >> k;
		int a[n + 5], maxRange[n + 5];
		for(int i = 1; i <= n; i ++) cin >> a[i];
		deque <int> dq;
		while (dq.size()) 
			dq.pop_front();
		for (int i = 1; i <= n; ++i) { 
		    while (dq.size() && a[dq.back()] <= a[i]) 
		    	dq.pop_back();
		    dq.push_back(i); 
		    if (dq.front() + k <= i) 
		    	dq.pop_front();
		    if (i >= k) 
		    	maxRange[i] = a[dq.front()]; 
		}
		for(int i = k; i <= n; i ++)
			cout << maxRange[i] << " ";
		cout << endl;
	} 
	return 0;
}