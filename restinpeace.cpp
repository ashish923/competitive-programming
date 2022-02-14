#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%21==0) cout<<"The streak is broken!\n";
    else{
        bool f =false;
        while(n>0){
            int r = n%100;
            if (r==21){ 
            f = true;
            break; }
            n /=10;
        }
        if(f==false)cout<<"The streak lives still in our heart!\n";
        else {cout<<"The streak is broken!\n";}
    }



}

}