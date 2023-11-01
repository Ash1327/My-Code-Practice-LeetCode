class Solution {
public:
int print(string s,int i,int j)
{
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++)
    {
        int string1=print(s,i,i);
        count=count+string1;
        int string2=print(s,i,i+1);
        count=count+string2;
    }
    return count;
    }
};
