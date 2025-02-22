class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        multiset<int>ms;
        for(int i = l ; i <=r ; i++){ // i = l to r
            for(int j =0 ; j <= nums.size()-i;j++){
                int sum = 0 ;
                for(int k = j ; k < j+i;k++){
                    sum+=nums[k];
                }
                // cout<<endl;
                if(sum>0) ms.insert(sum);
            }
        }
        return ms.empty()? -1 : *ms.begin();
        // return 0;
    }
};