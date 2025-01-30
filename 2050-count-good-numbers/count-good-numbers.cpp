class Solution {
public:
    long long k = 1e9+7;
    long long fun( long long a , long long b){
        if(b==0){
            return 1;
        }
        long long s1 = fun(a,b/2);
        if(b%2){
            return (s1%k * s1%k * a%k)%k;
        }
        else{
            return (s1%k * s1%k)%k;
        }
    } 
    int countGoodNumbers(long long n) {
        long long x = fun(5,(n+1)/2);
        long long y = fun(4,n/2);
        return (x%k * y%k)%k;
    }
};