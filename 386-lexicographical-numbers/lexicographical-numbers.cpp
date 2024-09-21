class Solution {
public:
    // static bool comp(string a , string b){
    //     return a<b;
    // }
    vector<int> lexicalOrder(int n) {
        vector<string>strvec;
        vector<int>res;
        for(int i = 1 ; i <= n ; i++){
            string s = to_string(i);
            strvec.push_back(s);
        }
        sort(strvec.begin(),strvec.end());
        for(auto i : strvec){
            res.push_back(stoi(i));
        }
        return res;
    }
};