#include<bits/stdc++.h>
using namespace std;
int main(){
	int hours[5005], minutes[5005], seconds[5005];
	int n;
	cin >> n;
	for(int i = 0; i < n; i ++){
		cin >> hours[i] >> minutes[i] >> seconds[i];
	}
	for(int i = 0; i < n; i ++){
		for(int j = i + 1; j < n; j ++){
			if(hours[i]>hours[j]){
				swap(hours[i], hours[j]);
				swap(minutes[i], minutes[j]);
				swap(seconds[i], seconds[j]);
			}
			else if(hours[i] == hours[j]){
				if(minutes[i] > minutes[j]){
					swap(minutes[i], minutes[j]);
					swap(seconds[i], seconds[j]);
				}
				else if(minutes[i] == minutes[j]){
					if(seconds[i] > seconds[j])
						swap(seconds[i], seconds[j]);
				}
			}
		}
	}
	for(int i = 0; i < n; i ++){
		cout << hours[i] << " "<< minutes[i] << " " << seconds[i] << endl;
	}
	return 0;
}