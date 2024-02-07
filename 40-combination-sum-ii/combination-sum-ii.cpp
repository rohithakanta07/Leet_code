class Solution {
public:
    void fun(vector<int>&v , int index, int size , int s , int target ,vector<int>&ans , vector<vector<int>>& final)
    {
        
        if(index >= size && s!= target)
        {
            return ;
        }
        if(s==target)
        {
            final.push_back(ans);
            return ;
        }
        if(s>target){
            return ;
        }
        ans.push_back(v[index]);
        fun(v,index+1,size,s+v[index],target,ans,final);
        while(index+1 < size && v[index]==v[index+1])index ++;
        ans.pop_back();
        fun(v,index+1,size,s,target,ans,final);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>>final ;
        sort(candidates.begin(),candidates.end());
        fun(candidates,0,candidates.size(),0,target,ans,final);

        set<vector<int>>s(final.begin(),final.end());
        final.clear();
        for(auto it : s)
        {
            final.push_back(it);
        }

        return final;

        // sort(final.begin(), final.end());
        // // Remove duplicate values from vector
        // final.erase(unique(final.begin(), final.end()), final.end());
        
    }
};