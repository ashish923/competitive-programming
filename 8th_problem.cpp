#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    while(t--){
        int x,y,cd =0, cu = 0 ;
        unordered_map<int,int> mp;
        cin >> x>>y;
        int arr[x];
        for(int i=0; i<x ; i++){
            
            cin>>arr[i];
            if(mp.find(arr[i]%y) == mp.end()){
                cd++;cu++;
            }
            else{
                cu--;
            }
            mp[arr[i]/y]++;
        }
        cout<<cd<<"\n"<<cu<<"\n";
        
    }
    return 0;
}
