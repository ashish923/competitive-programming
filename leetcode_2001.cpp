int finalValueAfterOperations(vector<string>& operations) {
        int c =0;
        for(int i=0; i<operations.size(); i++){
            string s =" ";
            s = operations[i];
            if(s[1]=='+') c++;
            else c--;
           
            
        }
        return c;
        
    }