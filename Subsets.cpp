class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int sub_ct=(1<<n);
        
        vector<vector<int>>ans;
        for(int mask=0;mask<sub_ct;++mask)
        {
            vector<int>v;
            for(int i=0;i<n;++i)
            {
                if((mask & (1<<i))!=0)
                   v.push_back(nums[i]);
            }
            ans.push_back(v);
           // v.clear();
        }
      return ans;
    }
};
