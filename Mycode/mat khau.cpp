#include <iostream>
#include <string>
#include <algorithm>
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
	int n; cin >> n;
	tmp arr[100005];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].str;
		arr[i].x = arr[i].str.length();
	}
	int res = 0;
	sort(arr, arr + n, Comparation);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i].str == arr[j].str)
				res += 2;
			else if (arr[i].str.find(arr[j].str) != -1) {
				res ++;
			}
		}
	}
	cout << res << endl;
	return 0;
}
