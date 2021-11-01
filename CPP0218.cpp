#include<bits/stdc++.h>
using namespace std;
void printEqualModNumbers (int arr[], int n,int&count){  
    sort(arr, arr + n);
    int d = arr[n-1] - arr[0];  
    if(d==0){    
        return;
    }
    vector <int> v;
    for (int i=1; i*i<=d; i++){
        if (d%i == 0)
        {
            v.push_back(i);
            if (i != d/i)
                v.push_back(d/i);
        }
    }
 
    for (int i=0; i<v.size(); i++)
    {
        int temp = arr[0]%v[i];
 
        int j;
        for (j=1; j<n; j++)
            if (arr[j] % v[i] != temp)
                break;
 
        if (j == n)
            count++;
    }
}
int main()
{
   	int t;cin>>t;
   	while(t--){
	   	int arr[100000];
	   	int count=0;
	   	int n;
		  cin >> n;
	   	for(int i=0;i<n;i++)cin>>arr[i];
	    printEqualModNumbers(arr, n,count);
	    cout << cnt << endl;
    }
    return 0;
}
