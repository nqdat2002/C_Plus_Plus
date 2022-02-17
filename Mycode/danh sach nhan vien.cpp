#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
struct NhanVien {
    string name, sex, date_of_birth, address, phone_number, date_of_company;
};
void nhap(NhanVien& x) {
    if(cnt==0)
        getchar();
    cnt ++;
    getline(cin, x.name);
    getline(cin, x.sex);
    getline(cin, x.date_of_birth);
    getline(cin, x.address);
    getline(cin, x.phone_number);
    getline(cin, x.date_of_company);
}
void inds(NhanVien ds[], int n){
    for (int i = 0; i < n; i++){
        cout << ((i < 9) ? "0000" : "000") << i + 1 << " ";
        cout << ds[i].name << " " << ds[i].sex << " " ; 
        cout << ds[i].date_of_birth << " " << ds[i].address << " ";
        cout << ds[i].phone_number << " " << ds[i].date_of_company;
        cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}