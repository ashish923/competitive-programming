#include<bits/stdc++.h>
using namespace std;


typedef vector<int> vi;




void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // cout<<" dfgh";
        vector <int> vc;
        int l = 0,h=0;


        while(l<m && h<n){
            // cout<<"dfghj";
            if(nums1[l] > nums2[h]){
                cout<<nums2[h]<<" ";
                vc.push_back(nums2[h]);h++;
            }
            else if(nums1[l] < nums2[h]){
                cout<<nums1[l]<<" ";
                vc.push_back(nums1[l]);l++;
            }
            else{
                cout<<nums1[l]<<" "<<nums2[h]<<" ";

                vc.push_back(nums1[l]);
                vc.push_back(nums2[h]);
                l++;h++;
            }
            
        }
        if(l<=m-1){
            while(l<m){
            // cout<<"dfghj";
                cout<<nums1[l]<<" ";
                vc.push_back(nums1[l]);
                l++;
                
            }
        }
        if(h<n){
            while(h<n){
                 // cout<<"dcfvgb";
                cout<<nums2[h]<<" ";
                vc.push_back(nums2[h]);
                h++;
                
            }
        }
        for(int i=0 ; i<vc.length() ;i++){
            nums1[i] = vc[i];

        }
        
        
    }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   vi vc,vb;
   int m,n;
   cin>>n>>m;

   for (int i = 0; i < n; ++i)
   {
    int z;
    cin>>z;
    vc.push_back(z);

   }
        for (int i = 0; i < m; ++i)
   {
    int z;
    cin>>z;
    vb.push_back(z);
  
   }
// for (int i = 0; i < m; ++i)
// {
//     cout<<vb[i]<<" ";
//     /* code */
// }
   merge(vc,3,vb,m);

    return 0;
}