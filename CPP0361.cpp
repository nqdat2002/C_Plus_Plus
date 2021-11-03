#include<bits/stdc++.h>
using namespace std;
struct tmp {
	string str;
	int x;
};
bool Comparation(tmp a, tmp b) {
	if (a.x > b.x)
		return true;
	return false;
}
int main() {
	int n; 
	cin >> n;
	tmp arr[100005];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].str;
		arr[i].x = arr[i].str.length();
	}
	int cnt = 0;
	sort(arr, arr + n, Comparation);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i].str == arr[j].str)
				cnt += 2;
			else if (arr[i].str.find(arr[j].str) != -1) {
				cnt++;
			}
		}
	}
	cout << cnt;
	cout << endl;
	return 0;
}
