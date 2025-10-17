class Solution {
public:
    int mySqrt(int x) {
        int s = 0 ;
        int e = x ;

        int mid = s+(e-s)/2;

        int ans = -1;

        while(s<=e){

            long long sqr = (long long) mid*mid; 

            if(sqr == x) {
                return mid ;
            }else if(sqr<x){
                ans = mid ;
                s = mid+1 ;

            }else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans ;

    }
};
