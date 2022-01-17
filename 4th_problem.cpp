#include<bits/stdc++.h>
using namespace std;
#define MOD 1000007
bool arr[MOD];


void seive(){
	fill(arr,arr+MOD,true);
	for (int i = 2; i*i < MOD; ++i)
	{
		if(arr[i]){
			for (int j = 2*i; j < MOD; j=j+i)
			{
				arr[j] = false;
				/* code */
			}
		}
	}
}
int solve(int x){
	if(x<=2){
		return 1;
	}
	return arr[x];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
    int T; cin >> T;
    while(T--){
        
        int c; 
        cin>>c;
        // if(c,2) cout<
     
        if( solve(c)==false) cout<<"YES\n";
        else cout<<"NO\n";
       
    }

    return 0;
}