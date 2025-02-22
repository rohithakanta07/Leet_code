class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        // vector<vector<int>>v;
        // map<int,int>mp;
        // for(int i = 0;i<k;i++){
        //     mp[nums[i]]++;
        // }
        // for(auto i : mp){
        //     vector<int>a;
        //     a.push_back(i.second); //count
        //     a.push_back(i.first); //element
            
        //     v.push_back(a);
        // }
        // sort(v.begin(),v.end());
        // for(auto i : v){
        //     for (auto j : i){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        // return {};

        vector<int>ans;
        for(int i = 0 ; i<=nums.size()-k;i++){
            map<int,int>mp;
            for(int j = i ; j < i+k;j++ ){
                mp[nums[j]]++;
            }
            priority_queue<pair<int ,int>>pq;
            for(auto i : mp){
                pq.push({i.second,i.first});
            }
            cout<<endl;
            int s =0 ,c=x;
            while(c>0 and !pq.empty()){
                cout<<pq.top().first<<" "<<pq.top().second<<endl;
                s+=pq.top().first*pq.top().second;
                pq.pop();
                c--;
            }
            cout<<endl;
            ans.push_back(s);
        }
        return ans;
    }
};