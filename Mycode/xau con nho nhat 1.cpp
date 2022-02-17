#include <bits/stdc++.h>
using namespace std;
void TC(){
    string s1, s2;
    cin >> s1 >> s2;
    int cnt2[256]={0}, cnt1[256]={0};
    for(char x : s2)
        cnt2[x]++;
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
        cout << "-1" << endl;
    }
    else
        cout << s1.substr(index, res) << endl;
}
int main(){
    int t;
	cin >> t;
    while(t--){
        TC();
    }
    return 0;
}

