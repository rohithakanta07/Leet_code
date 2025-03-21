class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0 ; i<nums.size() ; i++){
            if(mp.find(nums[i]) ==mp.end()) mp[nums[i]]++;
            string s = to_string(nums[i]);
            reverse(s.begin(),s.end());
            int a = stoi(s);
            // cout<<a<<" ";
            if(mp.find(a) ==mp.end()) mp[a]++;
        }
        return mp.size();
    }
};