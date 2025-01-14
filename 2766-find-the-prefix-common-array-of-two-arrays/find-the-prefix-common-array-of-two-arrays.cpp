class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mp;
        int n=A.size();
        vector<int>ans;
        if(A[0]==B[0]){
            ans.push_back(1);
        }
        else{
            ans.push_back(0);
        }
        mp[A[0]]++;
        mp[B[0]]++;
        for(int i=1;i<n;i++ ){
            int push=ans[i-1];
            if(A[i]==B[i]){
                push+=1;
                ans.push_back(push);
            }else{
                push+=mp[A[i]];
                push+=mp[B[i]];
                ans.push_back(push);
            }
            mp[A[i]]++;
        mp[B[i]]++;
        }

        return ans;
    }
};