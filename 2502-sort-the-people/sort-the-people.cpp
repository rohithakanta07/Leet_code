class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int , int >mp;
        int c = 0;
        for(auto i : heights){
            mp[i]=c;
            c++;
        }
        sort(heights.rbegin(),heights.rend());
        vector<string>ss;
        c = 0;
        while(c<heights.size()){
            ss.push_back(names[mp[heights[c]]]);
            c++;
        }
        return ss;
    }
};