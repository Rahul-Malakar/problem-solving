// https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curgas=0,sind=0;
        int tgas=0, tcost=0;
        
        for(int i=0; i<gas.size(); i++){
            tgas+=gas[i];
            tcost+=cost[i];
            curgas+=gas[i]-cost[i];
            if(curgas<0){
                sind = i+1;
                curgas=0;
            }
            
        }
        if(tcost>tgas){
            return -1;
        }
        else{
            return sind;
        }
        
        
    }
};