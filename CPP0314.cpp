#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    set<string> st;
    for(int i  =0; i < t; i++){
        string s; getline(cin, s);
        st.insert(s);
    }
    cout << st.size();
    return 0;
}
