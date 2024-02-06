class Solution {
public:
    void maya(vector<int>v , int index , int size , vector<int>&ans, int target ,int sm ,vector<vector<int>>&final)
    {
        if(index>= size and target!=sm){
            return ;
        }
        if(sm == target )
        {
            final.push_back(ans);
            return ;
            
        }
        if(sm>target){
            return ;
        }
        ans.push_back(v[index]);
        maya(v, index,size ,ans,target,sm+v[index],final);
        ans.pop_back();
        maya(v, index+1,size ,ans,target,sm,final);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>final;
        vector<int>ans;
        sort(candidates.begin(),candidates.end());
        maya(candidates,0,candidates.size(),ans,target,0,final);
        return final;
    }
};