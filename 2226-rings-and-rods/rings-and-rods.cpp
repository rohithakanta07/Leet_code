class Solution {
public:
    int countPoints(string rings) {
        unordered_map<char,vector<int>>mp;
        for(int i = 0 ; i < rings.length();i+=2){
            int a = (int)rings[i+1]-'0';
            mp[rings[i]].push_back(a);
        }
        map<int,int>mapp;
        for(auto i : mp){
            set<int> uniqueDigits;
            for(auto j : i.second){
                uniqueDigits.insert(j);
            }
            for(auto k : uniqueDigits){
                mapp[k]++;
            }
        }
        int c =0 ;
        for(auto i : mapp){
            if(i.second == 3 ){
                c+=1;
            }
        }
        return c;
        // for(auto j :mp){
        //     cout<<j.first<<" ";
        //     for(auto i : j.second){
        //         cout<<i<<" ";
        //     }
        //     cout<<endl;
        // }



        return 0;
    }
};