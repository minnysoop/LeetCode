class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int wva = INT_MIN;
        
        for (int i=1;i<points.size();i++){
            wva = max(wva, points[i][0] - points[i-1][0]);
        }
        
        return wva;
    }
};