#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i,index_number;
		cin >> n;
		if(n==1) 
			cout << "1 1" << endl;
		else{
			i = 2;index_number = 0;
			while(i <= n){
				if(n % i == 0){
					n = n / i;
					index_number ++;
					if(index_number == 1)
						cout << i << " " ;
				}
				if(n % i != 0){
					if(index_number > 0) 
						cout << index_number << " " ;
					i ++;
					index_number = 0;
				}
			}
			cout << endl;
		}
	}
	return 0;	
}
