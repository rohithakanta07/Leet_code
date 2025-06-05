class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int h = accumulate(weights.begin(),weights.end(),0);
        int mid;
        while(l<h){
            mid =(l+h)/2;
            int sm= 0 ,c=1;
            for(int i = 0 ; i < weights.size();i++){
                sm+=weights[i];
                 if(sm>mid){
                    c++;
                    sm=weights[i];
                }
            }
            if(c>days){
                l = mid+1;
            }
            else{
                h = mid;
            }
        }
        return l;

    }
};