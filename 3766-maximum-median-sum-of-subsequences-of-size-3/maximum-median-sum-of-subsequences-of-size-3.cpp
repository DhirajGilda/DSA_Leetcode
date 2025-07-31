class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        // long long z=nums.size()/3;

        // unordered_map<int,int>mp;
        // for(auto i:nums){
        //     mp[i]++;
        // }
        // vector<int>sortedMap;
        // for(auto i:mp){
        //     sortedMap.push_back(i.first);
        // }
        // sort(sortedMap.begin(),sortedMap.end());
        // int cnt=0;
        // long long ans=0;
        // for(int i=sortedMap.size()-1;i>=0;i--){
        
        //         cout<<sortedMap[i]<<"-";
        //         long long x=mp[sortedMap[i]];
        //         cout<<x<<endl;
        //         long long x1=x/2;
        //         cout<<x1<<"-"<<sortedMap[i]<<"-"<<(x1*sortedMap[i])<<endl;
        //         // if(x1>z || x1>cnt){
        //             x1=min(x1,z-cnt);
        //         // }
        //         ans=ans+(x1*sortedMap[i]);
        //         cnt=cnt+x1;
        //         cout<<ans<<"-"<<cnt<<"-"<<x<<endl;


        //     if(cnt>=z){
        //         break;
        //     }
           
        // }

        // return ans;

         sort(nums.begin(), nums.end());
        int n = nums.size();
        long long ans = 0;

        // We pick every second element from the end for z triplets
        for (int i = n - 2; i >= n / 3; i -= 2) {
            ans += nums[i];
        }

        return ans;


    }
};