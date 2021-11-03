#include<bits/stdc++.h> 
using namespace std; 
long long int Mul(long long int a, long long int b, long long int c){ 
	if (b == 0) 
		return 0; 
	long long int t = Mul(a, b/2, c); 
	if (b % 2 == 0) 
		return ( 2* (t % c)) % c; 
	else 
		return (a % c + 2*(t % c)) % c; 
} 
int main(){ 
	int t; 
	cin >> t; 
	cin.ignore();
	while(t--) { 
		long long int a, b, c;
		cin >> a >> b >> c; 
		cout << Mul (a, b, c) ;
		cout << endl ;
	} 
	return 0; 
}
/*
#include<bits/stdc++.h>
using namespace std; 
int main(){ 
	int t;
	cin >> t; 
	cin.ignore();
	while(t--) { 
		long long int a,b,c;
		cin >> a >> b >> c;
		cout << (long long int)( (a % c) * ( b % c ) ) % c << endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
string mul(string s1,string s2){
	int len1=s1.size();
	int len2=s2.size();
	int len=len2+len1;
	vector<int> a,b;
	for(int i=0;i<len1;i++)
		a.push_back(int(s1[i]-'0'));
	for(int i=0;i<len2;i++)
		b.push_back(int(s2[i]-'0'));
	vector< vector < int > > res(len2);
	int index=0;
	for(int i=len2-1;i>=0;i--){
		int nho=0,so=0,t=0;
		while(t<index){
			res[index].push_back(0);
			t++;
		}
		for(int j=len1-1;j>=0;j--){
			so=a[j]*b[i]+ nho;
			res[index].push_back(so%10);
			nho=so/10;
		}
		if(nho>0) 
			res[index].push_back(nho);
		while(res[index].size()<len) 
			res[index].push_back(0);
		reverse(res[index].begin(),res[index].end());
		index++;	
	}
	int nho=0;
	string ans="";
	for(int j=res[0].size()-1;j>=0;j--){
		int so=nho;
		for(int i=0;i<res.size();i++)
			so +=res[i][j];
		ans=char(so%10+'0')+ans;
		nho=so/10;			
	}
	if(nho>0) 
		ans = char(nho+'0')+ans;
	while(ans[0]=='0') 
		ans.erase(ans.begin());
	return ans;
} 
int modulex(string N, long long int M){
	int str[1000]; 
	long long int K=0;
	int len = N.size(); 
	for(int i = 0 ; i < len; i ++){
			str[i] = N[i] - '0';
		} 
	for(int i = 0 ; i < len ; i ++){ 
		K = ( K * 10 + str[i] ) % M; 
	} 
	return K;
}
int main(){ 
	int t;
	cin >> t; 
	cin.ignore();
	while(t--) { 
		string a,b;
		long long int c;
		cin >> a >> b >> c;
		cout << modulex(mul(a,b), c) << endl;
	} 
	return 0;
}*/
