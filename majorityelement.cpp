int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        unordered_map<int,int>::iterator it;

        int n = nums.size();
        for(int i=0 ; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp.find(nums[i]) !=mp.end()){
                 it = mp.find(nums[i]);
                if(it->second>n/2)
                   
                    return nums[i];
                    
            }
            
            
        }
        return -1;
  
    }