 bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char> mp,mp1;
        // unordered_map<char,int> mp1;
        int n=s.size();
        int i=0;
        while(i<=n){
            char x = s[i],y=t[i];
            if(mp.find(x) == mp.end() && mp1.find(y) == mp1.end()){
                mp[s[i]] = t[i];
                mp1[t[i]] = s[i];
            }else if((mp.find(x) != mp.end() && mp1.find(y) == mp1.end())
                     ||(mp.find(x) == mp.end() && mp1.find(y) != mp1.end())){
                return false;
            }
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]] != t[i])
                    return false;
            }
            i++;
        }
        
        return true;
        
        
        
        
    }