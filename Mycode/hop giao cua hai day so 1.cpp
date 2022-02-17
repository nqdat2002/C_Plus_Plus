#include <iostream> 
#include <set>
using namespace std; 
int main(){ 
	int T; cin >> T; 
	while(T--){ 
		int n, m; cin >> n >> m; 
		int a[n], b[m]; 
		set<int> st, sm;
		for(int i = 1; i <= n; i ++){ 
				cin >> a[i]; 
				st.insert(a[i]); 
		} 
		int k = 0; 
		for(int i = 1; i <= m; i ++){ 
			cin >> b[i]; 
			st.insert(b[i]); 
			if(n + i - st.size() - k != 0){
				sm.insert(b[i]); 
				k ++; 
			} 
		} 
		for(int x:st) cout << x << " "; 
		cout << endl; 
		for(int y:sm) cout << y << " "; 
		cout<<endl; 
	}
	return 0; 
}