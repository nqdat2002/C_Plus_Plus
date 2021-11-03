#include<bits/stdc++.h>
#include<string> 
using namespace std; 
int main() {
	int t,i,j,cnt1,cnt2;
	string str;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
		cnt1=0,cnt2=0;
		getline(cin, str);
		int len=str.length();
		for(j=0;j<len;j++){
			if(str[i]%2==0)
				cnt1++;
		}
		for(j=0;j<len/2;j++){
			if(str[j]==str[len-j-1])
				cnt2++;
		}
		if(cnt1==len && cnt2==len/2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;

}
