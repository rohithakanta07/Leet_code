class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans;
        int n = code.size();
        if(k>0){
            for(int i = 0 ; i<n;i++){
                int sum1=0;
                for(int j = 0 ; j<k;j++){
                    sum1+=code[(i+1+j)%n];
                }
                ans.push_back(sum1);
            }
        }
        else if(k==0){
            int a = 0 ;
            while(a < code.size()){
                ans.push_back(0);
                a++;
            }
        }
        else if (k<0){
            reverse(code.begin(),code.end());
           for(int i = 0 ; i<n;i++){
                int sum2=0;
                // k=(-k);
                for(int j = k; j<0;j++){
                    sum2+=code[(i-j)%n];
                }
                ans.push_back(sum2);
            }
            reverse(ans.begin(),ans.end());
        }
    
        return ans;
    }
};