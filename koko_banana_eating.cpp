bool solve(vector<int> arr, long long int mid, long long int h){
   long long int i = 0, n = arr.size(),k = 0;
   for (long long int i = 0; i < n; ++i)
   {
   	
   	// cout<<k<<"\n";
          	

   	if(arr[i]%mid == 0){
   		
   		 k += arr[i]/mid;
   	}
   	else{
   		k += arr[i]/mid + 1;

   	}
   }
   // cout<<"k ->"<<mid<<k<<"\n";
   if(k>h) return false;
   return true;
    
}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
       long long int l=1,high,n = piles.size(),s=0,ans;
        for(long long int i=0; i<n ; i++){
            if(piles[i]>s){
                s = piles[i];
            }
            
        }
        // sort(piles.begin(),piles.end());
        high =s;
        while(l<=high){
            long long int mid = l + (high-l)/2;
            // cout<<"mid->"<<mid<<"\n";

            if(solve(piles,mid,h)){
            	// cout<<"high->"<<mid<<"\n";
                ans = mid;
                high =mid-1;
            }
            else{
            	// cout<<"low->"<<mid<<"\n";
                l = mid +1;
                
            }
        }
        // bool z = solve(piles,2,8);
        // cout<<z<<" "<<h;
        // cout<<ans;
        
        return ans;
        
        
        
        
        
    }
};