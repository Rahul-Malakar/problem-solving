// https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int sum=INT_MAX;
        for(int i=0; i<blocks.size()-k+1; i++){
            int noww=0;
            for(int j=i; j<i+k; j++){
                if(blocks[j]=='W'){
                    noww++;
                }
            }
            
            sum=min(noww, sum);
        }
        return sum;
    }
};