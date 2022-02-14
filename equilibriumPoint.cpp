int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return 1;
        long int s=0;
        for(int i=0;i<n;i++){
            s += a[i];
        }
        for(int i=1;i<n;i++)
        {
            if(a[i-1] == s-a[i-1]-a[i])
                return i+1;
            a[i] += a[i-1];    
        }
    return -1;
    }