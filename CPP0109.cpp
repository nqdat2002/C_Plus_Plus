#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
int Parity(long long int x) {
    int c=0,d=0;
    while(x) {
        int i=x%10;
        if(i%2==0) c++;
        else d++;
        x/=10;
    }
    if(c==d)
    	return true;
    return false;
}
int main() {
   	long long int m,j,i=0;
    cin >> m;
    if(m%2==0){
    	for(j = pow(10,m-1); j < pow(10,m); j++){
      	  	if(Parity(j)){
        		cout << j << " ";
      			i++;
     			if(i%10==0) cout << endl;
 			}		
    	}
    }
	return 0;
}
