class Solution {
public:
    long long fn( int n){
        if(n==1){
            return 1;
        }
        return fn(n-1)+ (4*(n-1));
    }
    long long coloredCells(int n) {
        long long a = fn(n);
        return a;
    }
};