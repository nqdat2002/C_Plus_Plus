#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int A[1000], dem, res[100], idx = 0;
	memset(A, 0, sizeof(A));
	cin.ignore();
	// nhap vao so cau tho
	for(int i = 0; i < n; i++){
		int cnt = 0;
		string a, token;
		getline(cin, a);
		stringstream ss(a);
		while(ss >> token){
			cnt++;
		}
		A[i] = cnt;
	}
	dem = 0;
	for(int j = 0; j < n - 1; j ++){
		if(A[j] == 6 && A[j + 1] == 8){
			res[idx++] = 1;
			continue;
		}
		if(A[j] == 7 && A[j + 1] == 7 && A[j + 2] == 7 && A[j + 3] == 7){
			res[idx++] = 2;
			j += 3;
		}
	}
	for(int i = 0; i < idx; i ++){
		if(res[i] == 1 && i < idx - 1){
			i++;
			while(res[i] == 1){
				res[i]=0;
				i++;
			}
			i--;
			dem++;
			continue;
		}
		if(res[i] == 2)
			dem++;
	}
	cout << dem << endl;
	for(int i = 0; i < idx; i ++)
		if(res[i] != 0) cout << res[i] << endl;
	return 0;
}
/*
8
Minh ve minh co nho ta
Muoi lam nam ay thiet tha man nong
Minh ve minh co nho khong
Nhin cay nho nui nhin song nho nguon
Mot canh hai canh lai ba canh
Tran troc ban khoan giac chang lanh
Canh bon canh nam vua chop mat
Sao vang nam canh mong hon bay
*/

