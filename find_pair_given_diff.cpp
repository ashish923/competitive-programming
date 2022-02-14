#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
      sort(arr,arr+size);
    // for (int i = 0; i < size; ++i)
    // {
    //     cout<<arr[i]<<" ";
    //     /* code */
    // }
    int l=0,h=1;
   while(l<size&&h<size){
        // cout<<" while loop";
        // cout<<arr[h]<<" "<<arr[l]<<"  abs->"<<abs(arr[l]-arr[h])<<"\n";
        long int z = abs(arr[l]-arr[h]);
        if(z==n){ return 1; }

        if(z > n) l++;
        else{
            h++;
        }
      
    }
    
   
    return 0;
    
}