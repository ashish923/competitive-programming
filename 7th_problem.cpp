
class Solution {
public:
    bool isPalindrome(int x) {
       if(abs(x) != x) return false;
        
       long long int t= x,s=0;
        while(t>0){
            int r= t%10;
            s = s*10 +r;
            t /=10;
        }
        
        if(s==x) return true;
        
        return false;
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
       if(abs(x) != x) return false;
        
       long long int t= x,s=0;
        while(t>0){
            int r= t%10;
            s = s*10 +r;
            t /=10;
        }
        
        if(s==x) return true;
        
        return false;
    }
};

