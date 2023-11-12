class Solution {
public:
   int sumUptoN(int n){ return n*(n+1)/2; }
    int maximizeSum(vector<int>& nums, int k) {
        int mx = nums[0];
        for(auto n: nums) mx = max(mx, n);
        return sumUptoN(mx+k-1) - sumUptoN(mx-1);
    }
};
