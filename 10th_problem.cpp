class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length() <= 2) return 0;
        int l=0,j=1,c=0;
        for (int i =2; i<s.length() ; i++){
            if(s[i] != s[j] && s[i] != s[l] && s[l] != s[j])
                c++;
            l++;j++;
            
        }
        return c;
    }
};
