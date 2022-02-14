class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1 || x==2) return 1;
       long int l=0,h=x-1, k=x;
	while(l<=h){
		long int mid = l + (h-l)/2;

		if(mid*mid>k) {
			h = mid -1;
			// cout<<" h ->"<<mid<<"->"<<h<<"\n";
		}
		else{
			l = mid+1;
			// cout<<" l ->"<<mid<<"->"<<l<<"\n";

		}
	}
        return h;
        
    }
};