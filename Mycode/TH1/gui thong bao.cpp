#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin,s);
		if(s.size()<=100) cout<<s<<endl;
		else {

			string a[100];
			int dem=0;
			string token;
			stringstream ss(s);
			int k=0;
			while(ss>>token&&dem<100) {
				a[k++]=token;
				dem+=token.size()+1;
			}
			for(int i=0; i<k-1; i++) {
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
}
