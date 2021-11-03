#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int cnt=0;
		sort(arr.begin(), arr.end());
		if(arr[0]==arr[1]) cout << "-1" << endl;
		else cout << arr[0] << " ";
		for(int i=1;i<n;i++){
			if(arr[i]>arr[0]){
				cout << arr[i] << endl;
				break;
			}
		}
		
	}
	return 0;
}
