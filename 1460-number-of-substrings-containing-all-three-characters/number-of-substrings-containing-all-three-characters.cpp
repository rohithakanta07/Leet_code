class Solution {
public:
    int numberOfSubstrings(string s) {
        // int c = 0 ;
        // for(int i = 0 ; i < s.size();i++){
        //     string s1="";
        //     vector<int>v(3,0);
        //     for( int j = i ; j < s.size();j++){
        //         s1+=s[j];
        //         if(s[j] == 'a') v[0]+=1;
        //         else if (s[j] == 'b') v[1]+=1;
        //         else v[2]+=1;
        //         int flag = 1;
        //         for(int k = 0 ; k < v.size();k++){
        //             if(v[k] == 0){
        //                 flag = 0;
        //             }
        //         }
        //         if( flag == 1){
        //             c+=1;
        //         }
                
        //     }
        // }
        // return c;


        int l = 0 ,r = 0 ;
        int c = 0;
        map<char,int>mp;
        while(r < s.size()){
            mp[s[r]]++;
            while(mp['a']>0 && mp['b']>0 && mp['c']>0){
                c+=s.size()-r;
                mp[s[l]]-=1;
                l++;
            }
            r++;
        }
        return c;
    }
};