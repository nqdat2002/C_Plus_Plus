#include<bits/stdc++.h>
using namespace std;
int n;
int Sum_number(int n){
    int sum=0;
    while(n != 0){
        sum = sum + n%10;
        n/=10;
    }
    return sum;
}
int IsSmith(int n){
    int Sum = 0;
    int tmp = n;
    while(n % 2==0){
        Sum = Sum + 2;
        n /= 2;
    }
    for(int i = 3; i <= tmp / 2; i = i + 2){
        while(n % i == 0){
            Sum = Sum + Sum_number(i);
            n /= i;
        }
    }
    if( n > 2 || Sum != Sum_number(tmp)){
        return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        if(IsSmith(n) == 1)
        	cout << "YES" << endl;
        else 
			cout << "NO" << endl;
    }
    return 0;
}
