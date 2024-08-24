class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x=0;
        int n=t.length();
        int m=s.length();
        int i=0;
        while(n>0){
            if(s[x]==t[i]){
                x++;
            }
            i++;
            n--;
        }

        return x==m;
    }
};