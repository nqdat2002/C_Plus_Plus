#include <bits/stdc++.h>
using namespace std;
int n, a[100005];
void inp(){
	cin >> n;
	for(int i = 0; i < n; i ++) cin >> a[i];
}
void Solve(int a[], int n){
	stack<int> s;
	for(int i = 0; i < n; i ++){
		if(s.empty())
			s.push(a[i]);
		else if((a[i] + s.top()) % 2 != 0)
			s.push(a[i]);
		else s.pop();
	}
	cout << s.size() << endl;
}
int main (){
	inp();
	Solve(a, n);
	return 0;
}
