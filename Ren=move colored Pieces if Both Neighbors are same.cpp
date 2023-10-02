class Solution {
public:
    bool winnerOfGame(string s) {
        int c1=0,c2=0;
        for(int i=1;i<s.length();i++){
            if(s[i]=='A' && s[i-1]=='A' && s[i+1]=='A'){
                c1++;
            }
            else if(s[i]=='B' && s[i-1]=='B' && s[i+1]=='B'){
                c2++;
            }
        }

        if(c1>c2){
            return true;
        }
        else{
            return false;
        }
    }
};
