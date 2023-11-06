class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& v) {
       if(v.size()<3){
           return 0;
       }
       int n= v.size();
       int c=0,f=0;
       int d = v[1] - v[0];
       for(int i=2;i<v.size();i++){
           int d2 = v[i]-v[i-1];
           if(d!=d2){
               f=1;
           }
       }

       if(f==0){
           c=1;
       }
    if(c==1)
    {
        c = ((n-1) * (n-2))/2;
    }
    else{
       if(v.size()>3){
       for(int i=1;i<v.size()-1;i++){
           if(2*v[i] == (v[i-1] + v[i+1])){
               c++;
               if(v[i+1]==(v[i+2]-1)){
                   c++;
               }
           }
       }
       }
    }
       return c;
    }
};
