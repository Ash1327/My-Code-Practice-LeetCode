class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = (arr.size())/4;

        unordered_map<int,int>m;
        for(auto i:arr)
        {
            m[i]++;
        }
        int k=0;
        for(auto i:m)
        {
            if(i.second>n)
            {
                k= i.first;
                break;
            }
        }
        return k;
    }
};
