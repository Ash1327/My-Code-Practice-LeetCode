class Solution {
public:
    int maximumGap(vector<int>& v) {
        int n = v.size();
        if(n<2){
            return 0;
        }
        else{
            sort(v.begin(),v.end());
            int m = 0;
            for(int i=1;i<n;i++){
                m = max(m,v[i] - v[i-1]);
            }

            return m;
        }
    }
};
