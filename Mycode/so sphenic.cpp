#include <iostream> 
#include <algorithm>
#include <vector>
#include <set>
using namespace std; 
#define MAX 10000
vector<int> a(MAX, 0); 
void snt(int n) { 
    a[1] = 1; 
    for (int i = 2; i <= n; i++) { 
        if (a[i] == 0) { 
            a[i] = i; 
            for (int j = 2 * i; j <= n; j += i) 
                if (a[j] == 0) 
                    a[j] = i; 
        } 
    } 
} 
bool check(int n) { 
    set<int> st;
    while (n > 1) { 
        int x = a[n];
        int init_size = st.size(); 
        st.insert(x);
        if (st.size() == init_size || st.size() > 3) 
            return false; 
        n /= x; 
    } 
    return (st.size() == 3); 
} 
int main() { 
    snt(MAX);
	int T;cin >> T; 
    while(T--) {
    	int n; cin >> n;
        if (check(n)) cout << "1\n";
		else cout << "0\n"; 
    }
    return 0; 
} 
