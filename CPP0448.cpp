#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int cnt=0;
		for(int i=0;i<n;i++){
			if(arr[i]==x){
				cnt++;
			}
		}
		if(cnt==0) cout << "-1";
		else cout << cnt;
		cout << endl;
	}
	return 0;
}
