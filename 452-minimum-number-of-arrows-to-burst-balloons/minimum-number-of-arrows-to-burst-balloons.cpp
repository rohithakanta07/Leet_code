class Solution {
public:
static bool compareFirstElement(const vector<int> &a , const vector<int>&b)
{
    return a[1] < b[1];
}
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),compareFirstElement);
        for(const auto& row : points)
        {
            for(int value : row)
            {
                cout<< value<<" ";
            }
            cout<<endl;
        }
        int a = points[0][0];
        int b = points[0][1];
        if(points.size() == 1)
        {
            return 1;
        }
        int c = 1;
        for(int i = 0 ; i< points.size();i++)
        {
            if(points[i][0]>b){
                c++;
                b=points[i][1];
            }
        }
        return c ;
    }
};