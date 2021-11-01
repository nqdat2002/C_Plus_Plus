/*#include<bits/stdc++.h>
using namespace std;
bool arr[1001];
void simpleSieve(){
    memset(arr,true,sizeof(arr));
    for(int p=2;p*p<1001;p++){ 
        if(arr[p]){
            for(int i=p*2;i<1001;i=i+p)
            	arr[i]=false;
        }
    }
}
int find_sphene(int N){
    int arr1[8]={0};  
    int count=0;        
    int j=0;
    for(int i=1;i<=N;i++)    {
        if(N%i==0 && count<9)       
        {
            count++;
            arr1[j++]=i;
        }
    }
    if(count==8 && (arr[arr1[1]] && arr[arr1[2]] && arr[arr1[3]]))
    	return 1;
    return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    simpleSieve();
	    int ans=find_sphene(n);
	    if(ans)
	    	cout << "1" << endl;
	    else
	    	cout << "0" << endl;
	}
    return 0;
}
*/
#include <bits/stdc++.h> 
using namespace std; 
const int MAX = 10000;  
vector<int> least_pf(MAX, 0); 
void leastPrimeFactor(int n) { 
    least_pf[1] = 1; 
    for (int i = 2; i <= n; i++) { 
        if (least_pf[i] == 0) { 
            least_pf[i] = i; 
            for (int j = 2*i; j <= n; j += i) 
                if (least_pf[j] == 0) 
                    least_pf[j] = i; 
        } 
    } 
} 
bool isSphenic(int n) { 
    set<int> s;
    while (n > 1) { 
        int lpf = least_pf[n];
        int init_size = s.size(); 
        s.insert(lpf);
        if (s.size() == init_size || s.size() > 3) 
            return false; 
        n /= lpf; 
    } 
    return (s.size() == 3); 
} 
int main() { 
    leastPrimeFactor(MAX);
	int t;
	cin >> t; 
    for (int i=1; i<=t; i++) {
    	int n;
    	cin >> n;
        if (isSphenic(n)) 
           cout << "1" << endl;
		else cout << "0" << endl; 
    }
    return 0; 
} 
