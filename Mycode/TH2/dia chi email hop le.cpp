#include<bits/stdc++.h>
using namespace std;

int check(char a) {
	if(a>='a'&&a<='z') {
		return 1;
	}
	if(a>='A'&&a<='Z') {
		return 1;
	}
	if(a>='0'&&a<='9') {
		return 1;
	}
	if(a=='.'||a=='_') {
		return 1;
	}
	return 0;
}

int suly(string a) {
	int kt=1, i, dem=0, j=0;
	string h, b[100];
	getline(cin, a);
	for(i = 0; i<a.size(); i++) {
		if(a[i]=='@') {
			a[i]=' ';
			dem++;
		} else {
			if(!check(a[i])) {
				return 0;
			}
		}
	}
	stringstream s(a);
	while(s>>h) {
		b[j++]=h;
	}
	if(j>2||dem>1||kt==0||dem==0||b[0].size()>64||b[1].size()>254) {
		return 0;
	}
	dem=0;
	for( i=0; i<b[1].size(); i++) {
		if(b[1][i]=='.') {
			dem++;
		}
	}
	if(dem==0||b[1][i-1]=='.')	return 0;
	return 1;
}

void in(int i) {
	if(i==0) {
		cout << "NO"<<endl;
	} else {
		cout << "YES"<<endl;
	}
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		int kt;
		string a;
		kt=suly(a);
		in(kt);
	}
}
/*
4
code@ptit.edu.vn
ptit@ptit
psajdf
asfkh @askfd.h

*/
