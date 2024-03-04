class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string st ="";
        vector<char>v(s.size(),'0');
        for(int i = 0 ; i < s.size() ; i++)
        {
            v[indices[i]] = s[i];
            // int k = indices[i];
            // st=st+s[k];
            //  v.set(ind[i],s[i]);
        }
        for(int i = 0 ; i < v.size() ; i++)
        {
            st=st+v[i];
        }
        return st;
    }
};