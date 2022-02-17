#include<bits/stdc++.h>
using namespace std;
#define long long ll;
#define unsigned long long ull;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n;
		cin>>n;
		char a[n][n];
		int hol[n+1][n+1];
		int ver[n+1][n+1];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				hol[i][j]=0;
				ver[i][j]=0;
			}
		}
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){	
				hol[i][j]=0;
				ver[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i-1][j-1]=='X'){
					hol[i][j]=hol[i][j-1]+1;
					ver[i][j]=ver[i-1][j]+1;
				}
			}
		}
		int max=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				int small=min(hol[i][j],ver[i][j]);
				while (small > max)
            {
                if (ver[i][j - small + 1] >= small
                    && hol[i - small + 1][j] >= small)
                {
                    max = small;
                }
                small--;
            }
			}
		}
		cout<<max<<"\n";
	}
	return 0;
}