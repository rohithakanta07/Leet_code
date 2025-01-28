class Solution {
public:
    char solve(int n, int k, bool invert, int mid){
        //cout << n <<" " << mid << " " << k << endl;
        if(n == 1){
            if(invert == true) return '1';
            else return '0';
        }
        if(k == mid){
            if(invert == true) return '0';
            else return '1';
        }
        
        
        if(k <= mid){
            return solve(n-1,k,invert,(mid>>1));
        }
        else{
            return solve(n-1,mid - (k-mid),!invert,(mid >> 1));
        }
    }
    char findKthBit(int n, int k) {
        int mid = 1 << (n-1);
        char ans = solve(n,k,false,mid);
        return ans;
        
    }
};