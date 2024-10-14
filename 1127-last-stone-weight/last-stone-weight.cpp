class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         priority_queue<int>p;
        for(int i=0;i<stones.size();i++)
        {
            p.push(stones[i]);
        }
        while(p.size()>1)
        {
            int x=p.top();
            p.pop();
            int y=p.top();
            cout<<x<<" "<<y<<endl;
            // p.pop();
            if(x!=y)
            {
                p.pop();
                int s=x-y;
                p.push(s);
            }
            else
            {
                p.pop();
                p.push(0);
            }
        }
        return p.top();
    }
};