#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int T; cin >> T;
	while(T--){
		int n; cin >> n;
		int arr[n];
		for(int i = 0; i < n; i ++)
			cin >> arr[i];
		sort(arr, arr + n);
		int idx1 = 0, idx2 = n - 1;
		for(int i = 0; i < n; i ++){
			if(i % 2 == 0){
				cout << arr[idx2] << " ";
				idx2 --;
			}
			else{
				cout << arr[idx1] << " ";
				idx1 ++;
			}
		}
		cout << endl;
	}
	return 0;
}
