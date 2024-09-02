class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int ans=0;
        long long int sum=0;
        for(auto i:chalk){
            sum+=i;
        }
        long long int remaining=k%sum;
        cout<<remaining<<" "<<endl;
        for(int i=0;i<chalk.size();i++){
            if(chalk[i]<=remaining){
                remaining-=chalk[i];
            }else{
                ans=i;
                break;

            }
        }
        return ans;
    }
};