#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	string s;
	cin>>s;
	ull A=0,B=0;
	for(ull i=0;i<s.size();i++){
	    if(s[i]=='A'){
	    	B=1+(A<B?A:B);
		}
		else A=1+(A<B?A:B);
	}
	cout<<A;
	return 0;
}
