vector<int> leaders(int a[], int n){
        // Code here
        vector <int> v;
        int l=a[n-1];
        v.push_back(l);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=l){
                v.push_back(a[i]);
                l=a[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }