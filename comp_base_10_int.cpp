int bitwiseComplement(int n) {
        // long long z = 1;
        while(z = z<<1){
            if(z>n) break;  
        }
        
        return (n^(z-1));
        
    }