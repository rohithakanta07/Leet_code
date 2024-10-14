class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>yo;
        for(int i = 0 ; i < nums.size();i++){
            yo.push(nums[i]);
        }
        long long s = 0;
        while(k!=0){
            int mx = yo.top();
            yo.pop();
            s+=mx;
            // float a = );
            yo.push(ceil(mx/3.0));
            k--;
        }
        return s;
    }
};