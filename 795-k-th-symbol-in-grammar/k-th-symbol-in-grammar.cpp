class Solution {
public:
    int fun(int n , int k , int invert){
        if(n==1){
            if(invert==true){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        if(k<=(pow(2,n-1))/2){
            return fun(n-1,k,invert);
        }
        else{
            int x = pow(2,n-1);
            return fun(n-1,k-(x/2),!invert);
        }
    }
    int kthGrammar(int n, int k) {
        return fun(n,k,false);
    }
};