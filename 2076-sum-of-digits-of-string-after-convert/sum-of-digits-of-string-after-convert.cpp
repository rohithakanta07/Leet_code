class Solution {
public:
    int getLucky(string s, int k) {
        //conversion of alphabets to integer string
        string st = "";
        int c = 0;
        for(int i = 0 ; i<s.size();i++){
            st=st+to_string(int(s[i]) - int('a')+1);
        }
        long long val = 0 ;
        while(k--){
            val=0;
            for(int i = 0 ; i<st.size();i++)
            {
                val+=int(st[i]-'0');
            }
            st=to_string(val);
        }
        return val ;










        //conversion of integer string to integer

        //stoi only works for strings (with small len)
        //so we have converted each char into str and then we've used stoi
        
        // long long val = 0;
        // for(int j =0; j<st.size();j++)
        // {
        //     string k = "";
        //     k+=st[j];
        //     int a = std::stoi(k);
        //     val=val*10+a;
        // }
        
        // for(int i = 0 ; i<k ; i++){
        //     int s = 0;
        //     while(val>0){
        //         int r = val%10;
        //         s=s+r;
        //         val = val/10;
        //     }
        //     val=s;
        // }
        // return val;
    }
};