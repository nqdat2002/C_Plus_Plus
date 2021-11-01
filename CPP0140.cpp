#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int IsPerfect(){
	ll n;
	cin >> n;
    if (n > ll(1e12)){
        return 0;
    }
    ll sum = 1;
    for(int i = 2 ; i < sqrt(n); i++){
        if (n % i == 0){
            sum += i;
            sum += n/i;
        }
    }
    int tmp = sqrt(n);
    if( tmp * tmp == n) 
		sum += tmp;
    if (sum == n) 
		return 1;
    else 
		return 0;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
       cout << IsPerfect() << endl;
    }
    return 0;
}
