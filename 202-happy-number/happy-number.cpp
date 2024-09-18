class Solution {
public:
    bool isHappy(int n) {
        string num = to_string(n);
        while(num.size()>1){
            int summ=0;
            while(n!=0){
                int r=n%10;
                summ=summ+(r*r);
                n=n/10;
            }
            n=summ;
            num=to_string(summ);
            cout<<num<<" ";
        }
        if(num[0] == '1' || num[0] =='7'){
            return true;
        }
        else{
            return false;
        }
    }
};