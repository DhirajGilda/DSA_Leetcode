// class Solution {
// public:
//     vector<string> stringSequence(string target) {
//         vector<string>ans;
//         int n=target.length;
//         string a="";
//         int x=0;
//         while(ans[ans.size()-1].size()!=n){
//             for (i = 97; i <= 122; i++) 
//             {
//                 if(x<n)
//                 {
//                     a=a+ans[an.size()-1]
//                     while ((char)i != target[x])
//                     {
//                         ans.push_back(a+(char)i);
//                     }
//                 }
//                 break;
            
//             }
//         }
       
//     }
// };

class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        int n = target.length();
        string a = "";
        int x = 0;

        // Initialize with an empty string
        ans.push_back("");

        // Loop until the last string in 'ans' matches the target length
        while (ans.back().size() != n) {
            for (int i = 97; i <= 122; i++) {  // ASCII values for lowercase letters
                if (x < n) {
                    a = ans.back();  // Get the last element in the sequence
                    while ((char)i != target[x]) {
                        ans.push_back(a + (char)i);  // Add the incorrect characters
                        i++;
                    }
                    ans.push_back(a + target[x]);  // Add the correct character
                    x++;  // Move to the next character in the target string
                }
                break;
            }
        }
        ans.erase(ans.begin());
        return ans;
    }
};
