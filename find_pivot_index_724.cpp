int pivotIndex(vector<int>& nums) {
        
        int n = nums.size(),s=0,pre=0;
        int j=0;
        for(int i=0; i<n; i++){
            s += nums[i];
        }
        for(int i=0; i<n; i++){
            s -=nums[i]; 
            if( pre==s){
                return i;
            }
            pre += nums[i];
        }
        
        return -1;
    }