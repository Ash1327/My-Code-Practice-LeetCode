class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
        unordered_set<int>s;
        for(int i=0;i<v.size();i++){
                s.insert(v[i]);
        }

       int k=1;
       while(s.count(k)!=0){
           k++;
       }
       return k;
    }
};
