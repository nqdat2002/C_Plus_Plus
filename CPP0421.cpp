#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<long long int> arr1(n),arr2(n);
		for(int i=0;i<n;i++){
			cin >> arr1[i];
		}
		for(int i=0;i<n;i++){
			arr2[i]=-1;
		}
		for(int j=0;j<n;j++){
			for(int i=0;i<n;i++){
				if(i==arr1[j])
					arr2[i]=i;
			}
		}
		for(int i=0;i<n;i++){
			cout << arr2[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
		
