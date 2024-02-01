class Solution {
public:
    int minimumCost(vector<int>& nums) {
        // sort(nums.begin()+1,nums.end());
        int firstmin=INT_MAX;
        int secondmin=INT_MAX;

        for(int i=1;i<nums.size();i++){
            if (nums[i] <= firstmin) 
            { 
                secondmin = firstmin; 
                firstmin = nums[i]; 
            } 
            else if (nums[i] < secondmin && nums[i] != firstmin) 
            {
                 secondmin = nums[i];
            }
               

        }

        cout<<firstmin<< " "<<secondmin<<endl;
        return nums[0]+firstmin+secondmin;
    }
};