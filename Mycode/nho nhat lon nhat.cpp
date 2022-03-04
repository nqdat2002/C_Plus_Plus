#include <bits/stdc++.h>
using namespace std;
int main(){
	long long m,s;
	cin >> m >> s;
	if(s == 0 ||s > 9 * m){
		cout << "-1 -1";
		return 0;
	}
	if(m == 1 && s == 0){
		cout << 0 << " " << 0;
		return 0;
	}
	int a[m + 1], b[m + 1];
	for(int i = 0 ; i < m ; i ++){
		if(s >= 10){
			a[i] = 9;
			s -= 9;
		}
		else{
			a[i] = s;
			s = 0;
		}
	}
	for(int i = 0 ; i < m ; i ++){
			b[i] = a[i];
	}
	if(b[m - 1] == 0){
		b[m - 1] = 1;
		--b[m-2];
	}
	for(int i = m - 1 ; i >= 0 ; i --)	
		cout << b[i];
	cout << " ";
	for(int i = 0 ; i < m ; i ++)	
		cout << a[i];
		
	return 0;
}
