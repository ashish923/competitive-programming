 void sort012(int a[], int n)
    {
        int j=0;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                swap(a[i],a[j]);
                j++;
            }
        }
        int k=j;
        for(int i=j; i<n; i++){
            if(a[i]==1){
                swap(a[i],a[k]);
                k++;
            }
        }
    }