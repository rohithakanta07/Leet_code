class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int>bits(32);
        for(int i = 0 ; i < candidates.size();i++){
            int k = 0 ;
            int n ;
            while(candidates[i]>0){
                n=candidates[i]&1;
                if(n){
                    bits[k]+=1;
                }
                k+=1;
                candidates[i]=candidates[i]/2;
            }
            // k=0;
        }
        for(int i = 0 ; i < bits.size();i++){
            cout<<bits[i]<<" ";
        }
        int a = *max_element(bits.begin(),bits.end());
        return a;
    }
};