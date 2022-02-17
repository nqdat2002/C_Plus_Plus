#include <bits/stdc++.h>
using namespace std;
bool N[1000000];
void Sang(){
 	for (int i = 2; i <= 1000000; i++){
    	N[i] = true;
  	}
  	for (int i = 2; i <= sqrt(1000000); i++) {
    	if (N[i] == true)
		{
    	 	for (int j = 2 * i; j <= 1000000; j += i) {
     			N[j] = false;
      		}
    	}
  	}
}
void Solve(){
	Sang();
	int a, b;
	cin >> a >> b;
	if(a > b)
		swap(a, b);
	for(int j = a; j <= b; j ++){
		if(N[j])
			cout << j << " ";
	}
	cout << endl;
}
int main(){
	Solve();
	return 0;
}

