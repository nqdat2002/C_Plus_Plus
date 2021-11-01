#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,i;
	int n;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a >> b;
		int m=a,n=b;
		int c;
		if(a==b){
			cout << a << " " << b;
		}
		else
		{
			while(a!=b)
			{
				if(a>b) 
				c=a-b;
				else 
				c=b-a;
				a=b;
				b=c;
			}
		cout << (long long int)m*n/c << " ";
		cout << c << endl;	
		}
	}
	return 0;
}
