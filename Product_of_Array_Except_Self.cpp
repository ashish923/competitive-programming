 vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

       long long int p = 1;
     
          vector<int> v(n,1);
//         calc prefix product except the cuurent one
        for(int i=0; i<n; i++){
            v[i] *= p;
            p *= nums[i]; 
        }
        p=1;
        
//         calc suffix product except the cuurent one
        for(int i=n-1; i>=0; i--){
            
            v[i] *= p;
            p *=nums[i];
        }
        return v;
      
    }