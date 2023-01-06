https://leetcode.com/problems/maximum-ice-cream-bars/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int i;
        for(i=0; i<costs.size(); i++){
            if(costs[i]<=coins){
                coins-=costs[i];
            }
            else{
                break;
            }
        }
        return i;
        
    }
};