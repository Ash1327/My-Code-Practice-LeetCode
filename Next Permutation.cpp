class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int f=0;
    while (next_permutation(v.begin(), v.end())){
        for (auto i : v) {
            cout << i << " ";
        }
        f=1;
        break;
    }
    if(f==0){
        for(auto i:v){
             cout << i << " ";
        }
    }
        cout << endl;
    }
};
