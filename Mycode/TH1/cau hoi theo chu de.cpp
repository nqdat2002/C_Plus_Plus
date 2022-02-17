#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, id = 0;
	cin >> n;
	cin.ignore();
	bool ok = false;
	map<string, int> mp;
	string h, b[100];
	for(int i = 0; i < n; i ++){
		string a;
		getline(cin, a);
		if(a == ""){
			ok = true;
			continue;
		}
		if(i == 0 || ok = true){
			h = a;
			b[id++] = a;
			ok = false;
		}
		mp[h]++;
	}
	for(int i = 0; i < id; i ++){
		cout << b[i] << ": " << mp[b[i]] - 1 << endl;
	}
}
/*
9
Home/accommodation
What kind of housing/accommodation do you live in?
Who do you live with?
How long have you lived there?

Study
Describe your education
What is your area of specialization?
Why did you choose to study that major?
*/
