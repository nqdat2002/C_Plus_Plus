#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
int main(){
    faster();
    int t;
    cin>>t;
    while(t--){
    	int n,m,l;
    	cin>>n>>m>>l;
        int a[n][m];
        for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++) cin>>a[i][j];
		}
		int p=n-l+1;
		int q=m-l+1;
		int c[p][q];
		memset(c,0,sizeof(c));
		for(int i=0;i<=n-l;i++){
			for(int k=0;k<l;k++){
				for(int u=0;u<l;u++){
					int x=a[i+k][u];
					c[i][0]+=x;
				}
			}
		}
		for(int j=1;j<=m-l;j++){
			for(int i=0;i<=n-l;i++){
				int cc=0;
				for(int k=0;k<l;k++){
					cc+=a[i+k][j-1];
				}
				int ccc=0;
				for(int k=0;k<l;k++){
					ccc+=a[i+k][j-1+l];
				}
				c[i][j]=c[i][j-1];
				c[i][j]-=cc;
				c[i][j]+=ccc;
			}
		}
		for(int i=0;i<p;i++){
			for(int j=0;j<q;j++) c[i][j]/=(l*l);
		}
		for(int i=0;i<p;i++){
			for(int j=0;j<q;j++) cout<<c[i][j]<<" ";
			cout<<'\n';
		}
	}
	return 0;
}