long long maxSubarraySum(int arr[], int n){
        
        
         long long int max1=arr[0];
         long long int max2=arr[0];
         
        for(long long int i=1;i<n;i++){
            if(arr[i]>(arr[i]+max2))
                max2 = arr[i];
            else
                max2 = arr[i]+max2;
            if(max2>max1)
                max1 = max2;
            else
                max1 = max1;    
            
        }
        
        return max1;
    }