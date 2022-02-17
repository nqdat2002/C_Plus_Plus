#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	getchar();
	while(t--){
	    string str,res;
	    getline(cin, str);
	    int sum = 0;
	    int n = str.size();
	    for(int i = 0 ; i < n ; i ++){
	        if((int) str[i] >= 48 && (int)str[i] <= 57){
	            sum+= (int)str[i]-  48;
	        }
	        else  res += str[i];
	    }
	    for(int i = 0 ; i < res.size() - 1 ; i ++){
	    	for(int j = i + 1 ; j < res.size() ; j ++){
	    		if( res[i] > res[j]){
	    			char x = res[i];
	    			res[i] = res[j];
	    			res[j] = x;
				}
			}
		}
	    cout << res << sum;
	    cout << endl;
	}
    return 0;
}
