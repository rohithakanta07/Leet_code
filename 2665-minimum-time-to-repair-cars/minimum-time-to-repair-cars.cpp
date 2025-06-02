class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long l = 0 , mi = INT_MAX;
        long long m = *min_element(ranks.begin() , ranks.end());
        long long h = m * cars*cars;
        // sort(ranks.begin(),ranks.end());
        while(l<h){
            long long mid = (l+h)/2;
            // vector<int>c(ranks.size());
            long long sum =0 ;
            for(int i = 0 ; i < ranks.size();i++){
                sum+=(long long)sqrt((mid/ranks[i]));
            }
            // if(sum == cars){
            //     mi = min(mid,mi);
            //     break;
            // }
            if (sum >= cars ){
                h = mid;
            }
            else {
                l = mid+1;
            }
            // cout<<mid<<" "<<sum<<" "<<endl;
        }
        return l;
    }
};