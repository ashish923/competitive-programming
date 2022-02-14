 *findTwoElement(int *arr, int n) {
        // code here
        int *ans = new int[2];
        int xorx = arr[0];
        for(int i=1; i<n; i++){
            xorx ^= arr[i]; 
        }
        for(int i=1;i<=n;i++){
            xorx ^= i;
        }
        int rsb = xorx&(~xorx+1);
        
        int x = 0, y = 0;
        
        for(int i=0; i<n; i++){
            if(arr[i]&rsb){
                x ^= arr[i];
            }
            else{
                y ^= arr[i];
            }
            
        }
         for(int i=1; i<=n; i++){
            if(i&rsb){
                x ^= i;
            }
            else{
                y ^= i;
            }
            
        }
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                ans[0] = x;
                ans[1] = y;
                break;
            }
            if(arr[i]==y){
                ans[0] = y;
                ans[1] = x;
                break;
                
            }
        }
        // cout<<x<<y;
        return ans;
        
    }