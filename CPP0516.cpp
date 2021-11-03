#include <bits/stdc++.h>
using namespace std;
struct List {
	string Name_of_Product, Type_of_Product;
	int Code_of_Product;
	float Price, Purchase;
};
bool Comparation(List x, List y) {
	if (x.Purchase - x.Price > y.Purchase - y.Price )
		return true;
	return false;
}
int main() {
	int t; 
	cin >> t;
	cin.ignore();
	List arr[100];
	for (int i = 0; i < t; i ++) {
		getline(cin, arr[i].Name_of_Product);
		getline(cin, arr[i].Type_of_Product);
		cin >> arr[i].Price >> arr[i].Purchase;
		cin.ignore();
		arr[i].Code_of_Product = i + 1;
	}
	sort(arr, arr + t, Comparation);
	for (int i = 0; i < t; i ++) {
		cout << arr[i].Code_of_Product << " " << arr[i].Name_of_Product << " "; 
		cout << arr[i].Type_of_Product << " " << fixed << setprecision(2) << arr[i].Purchase - arr[i].Price;
		cout << endl;
	}
	return 0;
}
