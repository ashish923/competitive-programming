vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        
        
       
        
        string str="";
        unordered_map<string,vector<string>> mp;
        for(int i=0; i<n; i++){
            str = strs[i];
            if(strs[i]=="") str = "";
            sort(str.begin(),str.end());
            
                mp[str].push_back(strs[i]); 
           
            
        }
        vector<vector<string>> vc ;
        for(auto x : mp){
            vc.push_back(x.second);
        }
        return vc;
        
//        
    }