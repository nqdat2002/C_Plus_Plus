#include <bits/stdc++.h>
using namespace std;
struct Student {
	string code_of_std, name, code_of_class, email, name_of_company;
	int code;
};
bool Comparation(Student A, Student B) {
	if (A.code_of_std < B.code_of_std)
		return true;
	return false;
}
int main() {
	Student arr[100];
	int n; 
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		arr[i].code = i + 1;
		getline(cin, arr[i].code_of_std);
		getline(cin, arr[i].name);
		getline(cin, arr[i].code_of_class);
		getline(cin, arr[i].email);
		getline(cin, arr[i].name_of_company);
	}
	sort(arr, arr + n, Comparation);
	int q; 
	cin >> q;
	string str[5];
	for (int i = 0; i < q; i++)
		cin >> str[i];
	for (int j = 0; j < q; j++) {
		for (int i = 0; i < n; i++) {
			if (arr[i].name_of_company == str[j]) {
				cout << arr[i].code << " " << arr[i].code_of_std << " ";
				cout << arr[i].name << " " << arr[i].code_of_class << " ";
				cout << arr[i].email << " " << arr[i].name_of_company;
				cout << endl;
			}
		}
	}
	return 0;
}
