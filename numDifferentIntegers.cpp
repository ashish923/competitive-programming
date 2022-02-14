int numDifferentIntegers(string word) {
        
       string str = "";
        int c=0,n=word.size();
        unordered_set<string> mp;
        for(int i=0; i<n; ){
            
                        

            if((int)word[i]>58)
                i++;
            else if(word[i]=='0'&&(int)word[i+1]<58&&i!=n-1){
                i++;
            }
            else{
                cout<<i<<" ";
                while((int)word[i]>47&&(int)word[i]<58){
                    str += word[i];
                    i++;  
                }
               
                cout<<str<<" ";
                if(mp.find(str) == mp.end()){
                    c++;
                }
                mp.insert(str);
                str = "";
                
                
            }
            
        }
        return c;
    }