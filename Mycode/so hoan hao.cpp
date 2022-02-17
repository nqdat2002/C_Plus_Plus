#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll;
bool check(ll n){
	if (n > 1e12)
        return false;
    ll tmp = 1;
    for(int i = 2 ; i < sqrt(n) ; i++){
        if (n % i == 0){
            tmp += i; tmp += n / i;
        }
    }
    ll x = sqrt(n);
    if(x * x == n) tmp += x;
    if (tmp == n) 
		return true;
    else 
		return false;
}
int main(){
    int T; cin >> T ;
    while (T--){
       ll n; cin >> n;
       if(check(n)) cout << 1 << '\n';
       else cout << 0 << '\n';
    }
    return 0;
}
