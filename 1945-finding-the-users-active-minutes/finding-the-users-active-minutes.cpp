class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,set<int>>mp;
        for(int i = 0 ; i < logs.size();i++){
            mp[logs[i][0]].insert(logs[i][1]);    
        }


        vector<int>vv;
        for(auto i : mp){
            vv.push_back(i.second.size());
        }
        // for(auto i : vv){
        //     cout<<i<<" ";
        // }

        vector<int>ans(k,0);
        for(auto i : vv){
            ans[i-1]+=1;
        }
        

        
        return ans;
    }

};