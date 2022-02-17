
//o(1) space 
 void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        cout<<n;
        bool firstr = false, firstc = false; 
        
         for(int i=0; i<n; i++){
            // cout<<i;
            for(int j=0; j<matrix[i].size(); j++){
                
                if(matrix[i][j] == 0){
                    if(i==0) firstr = true;
                    if(j==0) firstc = true;
                    cout<<i<<j<<" ";
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
                
            }
            cout<<"\n";
        }
        
         for(int i=1; i<n; i++){
            for(int j=1; j<matrix[i].size(); j++){
               if(matrix[0][j]==0||matrix[i][0]==0){
                   cout<<i<<j<<" ";
                   
                   matrix[i][j] = 0;
               }
                
                
            }
        }
         if(firstr){
             for(int i=0; i<matrix[0].size(); i++){
              matrix[0][i] = 0;   
             }
         }
        if(firstc){
             for(int i=0; i<n; i++){
              matrix[i][0] = 0;   
             }
         }


 }