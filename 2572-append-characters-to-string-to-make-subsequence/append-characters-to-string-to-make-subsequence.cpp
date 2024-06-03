class Solution {
public:
    int appendCharacters(string s, string t) {
        int x=0;
        int y=0;
        int n=s.length();
        int m=t.length();
        while(x<n && y<m){
            if(s[x]==t[y]){
                x++;
                y++;
            }
            else{
                x++;
            }
        }
        return m-y;
    }
};