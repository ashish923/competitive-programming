int canBeTypedWords(string text, string brokenLetters) {
        int arr[257]={0},n = brokenLetters.size(),nn = text.size();
        for(int i=0; i<n; i++){
            
            // char z = ;
            arr[brokenLetters[i]] = 1;
            
        }
         int i=0,k=1,c=0;
        while(i<nn){
            if(arr[text[i]]==1) k=0;
            
            if(((text[i]== ' ')||(i==nn-1))){
                if(k==1)
                    c++;k=1;
            }
            
            i++;
        }
        
        
       
       
        
        return c;
        
    }