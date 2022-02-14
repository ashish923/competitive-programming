 int numRescueBoats(vector<int>& people, int limit) {
        int l=0,h=people.size()-1,c=0;
        sort(people.begin(),people.end());
        while(l<=h){
            if(people[l]+people[h]<=limit){
                l++;h--;c++;
            }
            else{
                h--;c++; 
            }
        }
            
        return c;
        
    }