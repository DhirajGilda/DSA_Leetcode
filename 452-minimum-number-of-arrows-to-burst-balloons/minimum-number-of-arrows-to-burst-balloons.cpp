class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        // sort(points.begin(),points.end());
        sort(points.begin(),points.end(),[](vector<int> &v1,vector<int> &v2){
        if(v1[0]==v2[0]){
            return v1[1]<v2[1];
        }
        return v1[0]<v2[0];
        });
        vector<vector<int>>ans;
        ans.push_back(points[0]);
        int x=0;
        for(int i=1;i<points.size();i++){
            // if(ans[x][1]==points[i][0]){
            //     ans[x][1]=points[i][1];
            // }
            if(ans[x][1]>=points[i][0]){
                if(ans[x][1]>points[i][1]){
                        ans[x][1]=points[i][1];
                    }
            
            }
            else{
                ans.push_back(points[i]);
                x++;
            }
        }
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans.size();
    }
};