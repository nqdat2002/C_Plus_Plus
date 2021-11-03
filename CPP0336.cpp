#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
bool cmp(pi a, pi b){
    return a.se < b.se;
}
 
int num(char c){
    return c - '0';
}
 
void TC(){
    string s1, s2;
    cin >> s1 >> s2;
    int cnt2[256]={0}, cnt1[256]={0};
    for(char x : s2){
        cnt2[x]++;
    }
    int res = INT_MAX, start = 0, index = -1, dem = 0;
    for(int i = 0; i < s1.size() ;i++){
        cnt1[s1[i]]++;
        if(cnt1[s1[i]] <= cnt2[s1[i]]) dem++;
        if(dem == s2.length()){
            while(cnt1[s1[start]] > cnt2[s1[start]] || cnt1[s1[start]] == 0){
                if(cnt1[s1[start]] > cnt2[s1[start]]) 
                    cnt1[s1[start]]--;
                ++start;
            }
            if(res > i - start + 1){
                res = i - start + 1;
                index = start;
            }
        }
    }
    if(index == -1){
        cout << "-1\n";
    }
    else
        cout <<s1.substr(index, res) << endl;
}
int main(){
    int t;
	cin >> t;
    while(t--){
        TC();
    }
}
