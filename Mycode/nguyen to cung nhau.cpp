#include <bits/stdc++.h>
using namespace std;
int IsPrime( int n){
	if (n<2) 
		return 0;
	for (int i = 2; i<= sqrt(n); i++)
		if ( n % i ==0) 
			return 0;
	return 1;
}
int Co_Prime(int a, int b){ 
	int tmp;
	while (b != 0){
		tmp = a % b;
		a = b;
		b = tmp;
	}
	if (a == 1 ) 
		return 1;
	return 0;
}
int main(){ 
	int t, n, cnt;
	cin >> t;
	while(t-- ){
		cin >> n;
		cnt = 0;
		for (int j = 1 ; j < n ; j++)
			if (Co_Prime(n,j)) 
				cnt++;
		if (IsPrime(cnt)) 
			cout << 1 << endl;
		else 
			cout << 0 << endl;
	}
	return 0;
}
