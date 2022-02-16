long long toh(int N, int from, int to, int aux) {
        // Your code here\
        
    int z = pow(2,N)-1;
        if(N==1){
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<"\n"; 
        return 1;
    }
    toh(N-1,from,aux,to);
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<"\n";
    toh(N-1,aux,to,from);
    
    return z;
    
    }