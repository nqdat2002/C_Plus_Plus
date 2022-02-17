#include <bits/stdc++.h>
using namespace std;
struct Person{
	string name, date_of_birth;
};
bool Comparation(Person x, Person y){
	string str1 = x.date_of_birth, str2 = y.date_of_birth;
	
	int day1 = (str1[0] - '0') * 10 + (str1[1] - '0');
	int month1 = (str1[3] - '0') * 10 + (str1[4] - '0');
	int year1 = (str1[6] - '0') * 1000 + (str1[7] - '0') * 100 + (str1[8]- '0') * 10 + str1[9] - '0';
	
	int day2 = (str2[0] - '0') * 10 + (str2[1] - '0');
	int month2 = (str2[3] - '0') * 10 + (str2[4] - '0');
	int year2 = (str2[6] - '0') * 1000 + (str2[7] - '0') * 100 + (str2[8] - '0') * 10 + str2[9] - '0';
	
	if(year1 != year2) 
		return year1 < year2;
	if(month1 != month2)
		return month1 < month2;
	return day1 < day2;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	Person arr[t];
	for(int i = 0; i < t; i ++){
		cin >> arr[i].name >> arr[i].date_of_birth;
	}
	sort(arr, arr + t, Comparation);
	cout << arr[t - 1].name << "\n" << arr[0].name << endl;
	return 0;
}
