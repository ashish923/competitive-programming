#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int st,int end){
    while(st<=end){
        int t = arr[st];
        arr[st] = arr[end];
        arr[end] = t;
        st++;
        end--;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int arr[x];
        for(int i=0; i<x; i++){
            cin>>arr[i];
        }
        reverse(arr,0,y-1);
        reverse(arr,y,x-1);
        reverse(arr,0,x-1);
        for(int i=0; i<x; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    
        
    }
	//code
	return 0;
}