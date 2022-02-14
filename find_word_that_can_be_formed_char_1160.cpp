int countCharacters(vector<string>& words, string chars) {
        
        int arr[26] = {0};
        for(int i=0; i<chars.size(); i++){
            char  t = chars[i];
            arr[t-'a']++;
        }
        int res=0;
        for(int i=0; i<words.size();i++){
            int j=words[i].size()-1,k=j;
            
            string s = words[i];
            bool f = false;
            int temp[26]={0};
            while(j>=0){
                char z = s[j];
                if(arr[z-'a'] >temp[z-'a']){
                    // arr[z-'a']--;
                    j--;
                    temp[z-'a']++;
                }
                else{cout<<s;f=true; break;}
            }
            if(f==false) res += s.size();
        }
        
        return res;
        
    }