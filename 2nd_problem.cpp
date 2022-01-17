long long minTime(long long a[], long long b[], long long n)
    {
        long long int s=0,s1=0,t=0;
        for(long long int i=0; i<n ;i++){
           if(t==0){
               s += a[i];
               s1 += b[i];
               t++;
               continue;
           }
           else{
                s += b[i];
               s1 += a[i];
               t--;
           }
        }
        return min(s,s1);
        
    }