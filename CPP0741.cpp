#include<bits/stdc++.h>
using namespace std;
const long long mod = 10e9+7;
typedef long long int ll;
ll x,y,p;
ll solve(ll x,ll y,ll p){
    ll sum=1;
    for(int i=1;i<=y;i++){
        sum = (sum * x) % mod; 
    }
    sum = sum % p;
    return sum;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cin >> x >> y >> p;
        cout << solve(x,y,p)<<endl;
    }
    
}
#include <bits/stdc++.h>
#include <algorithm>
long long n,k,p;
using namespace std;
long long Mul(long long a,long long b,long long p){
	if(b==0) return 0ll;
	long long tmp = Mul(a,b/2,p);
	if(b&1) return (tmp*2+a)%p;
	return tmp*2%p;
}
long long PoW(long long n,long long k,long long p){
	if(k==0) return 1;
	if(k==1) return n%p;
	long long tmp = PoW(n,k/2,p);
	long long a = Mul(tmp,tmp,p);
	if(k&1) return a*n%p;
	return a%p;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k >> p;
		cout << PoW(n,k,p);
		cout << endl;
	}
	return 0;
}
