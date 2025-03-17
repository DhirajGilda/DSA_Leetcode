class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mp;
        for(auto i:candyType){
            mp[i]++;
        }

        int x=candyType.size()/2;

        return min(x,(int)mp.size());
    }
};