class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int a = 0;
        sort(piles.begin(),piles.end());
        while(!piles.empty())
        {
            piles.erase(piles.begin()+piles.size()-1);
            a+=piles[piles.size()-1];
            piles.erase(piles.begin()+piles.size()-1);
            piles.erase(piles.begin());
        }
        return a;
    }
};