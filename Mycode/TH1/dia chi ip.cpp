#include<bits/stdc++.h>
using namespace std;

void xuat(int k) {
	if(k) {
		cout << "YES" <<endl;
	} else {
		cout << "NO" << endl;
	}
}

int check(string a){
	if(a.size()>3){
		return 0;
	}
	if(a.size()==3&&a>"255"){
		return 0;
	}
	return 1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		int n=0, j=0, kt=1, dem=0;
		for(int i=0; i<a.size(); i++) {
			if(a[i]=='.') {
				a[i]=' ';
				dem++;
				continue;
			}
			if(a[i]<'0'||a[i]>'9') {
				kt=0;
				break;
			}
		}
		if(dem!=3)	kt=0;
		dem=0;
		string k;
		stringstream s(a);
		while(s>>k){
			if(check(k)){
				dem++;
			}else{
				kt=0;
			}
		}
		if(dem!=4)	kt=0;
		xuat(kt);
	}
}
/*
5
dkwu.fsk.56.
227.5..88
*/
