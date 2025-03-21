class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>st;
        for(int i = 0 ; i<nums.size() ; i++){
            st.insert(nums[i]);
            string s = to_string(nums[i]);
            reverse(s.begin(),s.end());
            int a = stoi(s);
            // cout<<a<<" ";
            st.insert(a);
        }
        return st.size();
    }
};