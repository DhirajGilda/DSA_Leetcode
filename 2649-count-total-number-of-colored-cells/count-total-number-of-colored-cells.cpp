class Solution {
public:
    long long coloredCells(int n) {
        
        if(n==1) return 1;
        long long precell=n*2-1;

        for(long long i=n-1;i>=1;i--){
            long long x=2*(i*2-1);
            precell+=x;
        }

        return precell;
    }
};