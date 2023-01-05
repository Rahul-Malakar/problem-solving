https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<pair<int,int>> v;
        
        for(int i=0; i<points.size(); i++){
            v.push_back(make_pair(points[i][0], points[i][1]));
        }
        sort(v.begin(), v.end());
        int count=1;
        int curi=v[0].second;
        for(int i=1; i<v.size(); i++){
            curi=min(v[i].second,curi);
            if(v[i].first>curi){
                count++;
                curi=v[i].second;
                
            }
        }
        return count;
    }
};