// https://leetcode.com/problems/check-if-matrix-is-x-matrix/submissions/

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int flag=0;
        cout<<grid.size();
        int sz=grid.size();
        for(int i=0; i<sz; i++){
            for(int j=0; j<sz; j++){
                if((i+j==sz-1 && grid[i][j]==0)||(i-j==0 && grid[i][j]==0)){
                    flag=1;
                    break;
                }
                if((i+j!=sz-1 && i-j!=0) && grid[i][j]!=0){
                    flag=1;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){return false;}
        else{return true;}
        
    }
};