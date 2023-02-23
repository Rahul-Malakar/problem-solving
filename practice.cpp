class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0;
        int r = 0;
        for(int i : weights){
            l = max(l, i);
            r += i;
        }
        int mid;
        int ans = r;
        while(l <= r){
            mid = (l + r) / 2;
            if(check(weights, days, mid)){
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }

    bool check(vector<int>& weights, int days, int capacity){
        int reqdays = 1;
        int cur = 0;
        for(int i : weights){
            if(cur + i > capacity){
                reqdays++;
                cur = 0;
            }
            cur += i;
        }
        if(reqdays > days) return false;
        return true;
    }
};