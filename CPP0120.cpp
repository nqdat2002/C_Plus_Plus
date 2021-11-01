#include<bits/stdc++.h>
using namespace std;
int div_for_ab(int M, int N, int A, int B){
    int cnt=0;
    for(int i = M ; i <= N ; i++){
    	if(i % A == 0 || i % B == 0){
    		cnt ++;
		}
	}
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, M, N, A, B;
    cin >> t;
    while(t--) {
        cin >> M >> N >> A >> B;
        cout << div_for_ab(M,N,A,B) << endl;
    }
    return 0;
}
