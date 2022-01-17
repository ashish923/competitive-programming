#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int gcd(long long int a,long long int b){
	if(a==0)
	return b;

	else
	return gcd(b%a,a);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while(T--){
    	ll n,a;
    	cin>>n;
    	int arr[n];
    	// cin>>a;
    	// cin>>a;
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>arr[i];

    	}
    	a= arr[0];
    	for (int i = 1; i < n; ++i)
    	{
    	a = gcd(a,arr[i]);
    	}
    	// cout<<"dfgh";
    	cout<<a<<"\n";
        
        
       
    }

    return 0;
}