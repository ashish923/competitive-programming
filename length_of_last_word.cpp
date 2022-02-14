int lengthOfLastWord(string s) {
        
        int c=0,cc=0;
        for(int i=0 ; i<s.size(); i++){
            // c=0;
            if(s[i]==' '&&c!=0)
            {
                cc = c;
                c=0;
    
            }
            if(s[i] !=' ') c++;
            
            
        }
        if (s[s.size()-1]!=' ') return c;
        return cc;
        
    }