 bool isPalindrome(string s) {
        int n= s.length(),f=1;
    string str ="";
    for (int i = 0; i < n; ++i)
    {
         int lk = (int)s[i];
          if(s[i] ==' ' || lk<48||(lk<65)&&(lk>57) || (lk>90 && lk <97)|| lk >122){  cout<<lk<<" ->"<<s[i];continue;}
         // cout<<s[i];

       else{     if (isupper(s[i]))
            {
            s[i] = s[i] + 32;
         }
         str +=s[i];
          }
    }
    int l=0,h=str.length()-1;
   

    while(l<=h){
       
        if(str[l] == str[h]){
            // cout<<l<<"->"<<str[l]<<" "<<h<<" ->"<<str[h];
            l++;h--;
        }
        else{
            f=0;
            break;
        }
    }
   
    if(f==1) return 1;
    return 0;
    }