class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        vector<int >ans;
      
        int n=temperatures.size()-1;
        for(int i=n;i>=0;i--)
        {
            int c=0;
            if(st.empty())
            {
               ans.push_back(0); 
            }
            else if(st.size()>0 && st.top().first>temperatures[i])
            {
                ans.push_back(1);
            }
            else if(st.size()>0 && st.top().first<=temperatures[i])
            {
                while(st.size()>0 && st.top().first<=temperatures[i])
                {
                    st.pop();
                    
                }
                if(st.size()==0)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(st.top().second-i);  
                }
            }
            st.push({temperatures[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};