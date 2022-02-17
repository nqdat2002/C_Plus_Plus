#include <bits/stdc++.h>
using namespace std;
struct vb {
	string str;
	int count;
};
int tn(string str) {
	if (str.length() == 1)
		return 0;
	for (int i = 0; i < str.length(); i++)
		if (str[i] != str[str.length() - i - 1])
			return 0;
	return 1;
}
bool Comparation(vb X, vb Y) {
	if (X.str.length() > Y.str.length())
		return true;
	if (X.str.length() == Y.str.length() && X.str > Y.str)
		return true;
	return false;
}
int main() {
	vb A[10000];
	char X[1000];
	int k = 0;
	while (scanf("%s", &X) != EOF) {
		for (int j = 0; j < strlen(X); j ++)
			A[k].str.push_back(X[j]);
		k ++;
	}
	for (int i = 0; i < k; i ++) {
		for (int j = 0; j < k; j ++) {
			if (A[i].str == A[j].str)
				A[i].count++;
		}
	}
	sort(A, A + k, Comparation);
	for (int i = 0; i < k; i ++) {
		int x = 0;
		for (int j = 0; j < i; j++)
			if (A[i].str == A[j].str)
				x++;
		if (x > 0)
			continue;
		if (tn(A[i].str))
			cout << A[i].str << " " << A[i].count << endl;
	}
}
