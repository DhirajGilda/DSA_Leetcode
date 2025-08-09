class Solution {
public:
    bool isPowerOfTwo(int n) {
        // int count=0;
        // while(n>0){
        //     if(n & 1){
        //         count++;
        //     }
        //     n = n>>1;
        // }

        // return count==1;/

        // return (n>0) && ((n & (n-1))==0); 

        return (n>0) && ((n & ~(n-1))==n); 

    }
};