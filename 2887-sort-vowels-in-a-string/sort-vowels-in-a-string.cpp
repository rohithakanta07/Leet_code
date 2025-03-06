class Solution {
public:
    string sortVowels(string s) {
        vector<int>index;
        vector<char>charv;
        for(int i = 0 ; i<s.length();i++){
            if((int)s[i]==97 ||(int)s[i]==101 ||(int)s[i]==105 ||(int)s[i]==111 ||(int)s[i]==117
            ||(int)s[i]==65 ||(int)s[i]==69 ||(int)s[i]==73 ||(int)s[i]==79 ||(int)s[i]==85){
                charv.push_back(s[i]);
                index.push_back(i);
            }
        }
        sort(charv.begin(),charv.end());
        for(int i = 0 ; i < index.size();i++){
            s[index[i]]=charv[i];
        }
        
        return s;
        // 97 101 105 111 117 65 69 73 79 85 
    }
};